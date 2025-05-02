#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "aes_functions.cuh"

bool load_bmp(const std::string& filepath, std::vector<uint8_t>& header, std::vector<uint8_t>& pixelData) {
    std::ifstream file(filepath, std::ios::binary);
    if (!file) return false;

    header.resize(54);  // BMP header size
    file.read(reinterpret_cast<char*>(header.data()), 54);

    file.seekg(0, std::ios::end);
    size_t fileSize = file.tellg();
    size_t dataSize = fileSize - 54;

    file.seekg(54, std::ios::beg);
    pixelData.resize(dataSize);
    file.read(reinterpret_cast<char*>(pixelData.data()), dataSize);

    return true;
}


bool save_bmp(const std::string& filepath, const std::vector<uint8_t>& header, const std::vector<uint8_t>& pixelData) {
    std::ofstream file(filepath, std::ios::binary);
    if (!file) return false;

    file.write(reinterpret_cast<const char*>(header.data()), header.size());
    file.write(reinterpret_cast<const char*>(pixelData.data()), pixelData.size());

    return true;
}

bool parse_hex_key(const std::string& hex, uint8_t key[16]) {
    if (hex.length() != 32) return false;
    for (int i = 0; i < 16; ++i) {
        std::string byteStr = hex.substr(i * 2, 2);
        key[i] = static_cast<uint8_t>(std::stoi(byteStr, nullptr, 16));
    }
    return true;
}

int get_mode(const std::string& modeStr) {
    if (modeStr == "ECB") return 0;
    if (modeStr == "CBC") return 1;
    if (modeStr == "OFB") return 2;
    if (modeStr == "CTR") return 3;
    return -1; // Invalid
}

int get_decrypt(const std::string& encryptDecryptStr) {
    if (encryptDecryptStr == "encrypt") return 0;
    if (encryptDecryptStr == "decrypt") return 1;
    return -1; // Invalid
}

int main(int argc, char* argv[]) {
    if (argc < 6 || argc > 7) {
        std::cerr << "Usage: ./aes_cuda <encrypt_decrypt> <input.bmp> <output.bmp> [<hex_key>] <mode> [<hex_iv>]\n";
        return 1;
    }

    const std::string encrypt_decrypt_str = argv[1];
    const std::string input_path = argv[2];
    const std::string output_path = argv[3];
    const std::string hex_key = argv[4];
    const std::string mode_str = argv[5];
    const int encrypt_decrypt = get_decrypt(encrypt_decrypt_str);
    const int mode = get_mode(mode_str);

    if (encrypt_decrypt == -1) {
        std::cerr << "Invalid argument. Must choose encrypt or decrypt\n";
        return 1;
    }

    if (mode == -1) {
        std::cerr << "Invalid mode. Use one of: ECB, CBC, OFB, CTR\n";
        return 1;
    }

    uint8_t key[16];
    if (!parse_hex_key(hex_key, key)) {
        std::cerr << "Invalid key. Must be 32-character hex.\n";
        return 1;
    }

    uint8_t iv[16] = {0};
    if ((mode == 1 || mode == 2 || mode == 3)) {
        if (argc != 7) {
            std::cerr << "IV required for CBC, OFB, or CTR modes.\n";
            return 1;
        }
        const std::string hex_iv = argv[6];
        if (!parse_hex_key(hex_iv, iv)) {
            std::cerr << "Invalid IV. Must be 32-character hex.\n";
            return 1;
        }
    }

    std::vector<uint8_t> header, pixels;
    if (!load_bmp(input_path, header, pixels)) {
        std::cerr << "Failed to read BMP\n";
        return 1;
    }

    size_t paddedSize = ((pixels.size() + 15) / 16) * 16;
    pixels.resize(paddedSize, 0);

    if (encrypt_decrypt == 0) {
        aes_encrypt_cuda(pixels.data(), pixels.size(), key, mode, iv);
    }
    else {
        aes_decrypt_cuda(pixels.data(), pixels.size(), key, mode, iv);
    }

    if (!save_bmp(output_path, header, pixels)) {
        std::cerr << "Failed to save BMP\n";
        return 1;
    }

    if (encrypt_decrypt == 0) {
        std::cout << "Image encrypted using AES-128 " << mode_str << " mode.\n";
    }
    else {
        std::cout << "Image decrypted using AES-128 " << mode_str << " mode.\n";
    }
    
    return 0;
}

