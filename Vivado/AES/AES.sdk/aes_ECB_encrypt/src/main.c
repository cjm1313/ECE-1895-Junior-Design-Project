/*
 * main.c
 *
 *  Created on: Apr 21, 2025
 *      Author: aeone
 */
/*
 * main.c
 *
 *  Created on: Apr 21, 2020
 *      Author: aeone
 */
#include <stdio.h>
#include <stdlib.h>
#include "xaxidma.h"
#include "xparameters.h"
#include "xil_io.h"
#include "xil_cache.h"
#include "xil_printf.h"

#define DMA_DEV_ID          XPAR_AXIDMA_0_DEVICE_ID
#define AES_BASE_ADDR       0x43C00000  // AES core control registers base address (AXI-Lite)
#define DMA_MM2S_ADDR       0x00000000  // Address of input buffer in DDR (for MM2S)
#define DMA_S2MM_ADDR       0x00000000  // Address of output buffer in DDR (for S2MM)
#define BLOCK_SIZE          16  // 16 bytes per AES block

// Sample plaintext: 1 block (16 bytes)
uint8_t plaintext[BLOCK_SIZE] = {
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff
};

uint8_t key[16] = {
    0x2b, 0x7e, 0x15, 0x16,
    0x28, 0xae, 0xd2, 0xa6,
    0xab, 0xf7, 0x15, 0x88,
    0x09, 0xcf, 0x4f, 0x3c
};

int main() {
    XAxiDma AxiDma;
    int Status;

    uint8_t input_buffer[BLOCK_SIZE] __attribute__((aligned(32)));
    uint8_t output_buffer[BLOCK_SIZE] __attribute__((aligned(32)));

    // Initialize the DMA
    XAxiDma_Config *CfgPtr = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!CfgPtr) {
        xil_printf("No DMA config found\r\n");
        return XST_FAILURE;
    }
    Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
    if (Status != XST_SUCCESS) {
        xil_printf("DMA init failed\r\n");
        return XST_FAILURE;
    }

    if (XAxiDma_HasSg(&AxiDma)) {
        xil_printf("DMA is not in simple mode\r\n");
        return XST_FAILURE;
    }

    // Set the AES key via AXI-Lite interface (Control registers)
    for (int i = 0; i < 4; i++) {
        uint32_t key_word = 0;
        for (int j = 0; j < 4; j++) {
            key_word |= (key[i * 4 + j] << (8 * j));
        }
        Xil_Out32(AES_BASE_ADDR + (i * 4), key_word);  // Write key to AES control registers
    }  xil_printf("Key Sent\r\n");

    // Process a single 16-byte block
    for (int i = 0; i < BLOCK_SIZE; i++) {
        // Copy 1 byte of the plaintext to the input buffer (DDR)
        input_buffer[i] = plaintext[i];

        // Flush cache before DMA transfer
        Xil_DCacheFlushRange((UINTPTR)&input_buffer[i], 1); // Flush cache before each byte transfer

        // Copy 1 byte to the DMA source address (MM2S)
        Xil_Out32(DMA_MM2S_ADDR, (UINTPTR)&input_buffer[i]); // Write input buffer address to DMA source address

        // Start DMA transfer: MM2S (from memory to stream)
        Status = XAxiDma_SimpleTransfer(&AxiDma, (UINTPTR)&input_buffer[i], 1, XAXIDMA_DMA_TO_DEVICE);
        if (Status != XST_SUCCESS) {
            xil_printf("DMA input transfer failed for byte %d\r\n", i);
            return XST_FAILURE;
        }

        // Wait for the input transfer to complete
        while (XAxiDma_Busy(&AxiDma, XAXIDMA_DMA_TO_DEVICE));

        // Start DMA transfer: S2MM (from stream to memory)
        Status = XAxiDma_SimpleTransfer(&AxiDma, (UINTPTR)&output_buffer[i], 1, XAXIDMA_DEVICE_TO_DMA);
        if (Status != XST_SUCCESS) {
            xil_printf("DMA output transfer failed for byte %d\r\n", i);
            return XST_FAILURE;
        }

        // Wait for the output transfer to complete
        while (XAxiDma_Busy(&AxiDma, XAXIDMA_DEVICE_TO_DMA));

        // Print the output byte of the ciphertext
        xil_printf("Ciphertext byte %d: %02x\r\n", i, output_buffer[i]);
    }

    return 0;
}




