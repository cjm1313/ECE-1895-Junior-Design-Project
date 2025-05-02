#ifndef AES_CUDA_H
#define AES_CUDA_H

#include <stdint.h>

void aes_encrypt_cuda(uint8_t* host_data, size_t total_size, uint8_t key[16], uint8_t mode, uint8_t iv[16]);

void  aes_decrypt_cuda(uint8_t* host_data, size_t total_size, uint8_t key[16], uint8_t mode, uint8_t iv[16]);

#endif