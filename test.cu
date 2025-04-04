/*
Author: Connor Murray
Date: 4/3/2025
Description:
    This test program is written to help me learn how the CUDA framework facilitates communication between the CPU and the GPU.
    The program performs vector addition in parallel by running the kernel on several threads on the GPU
*/
#include <cstdlib>
#include <stdio.h>
#include <cuda_runtime.h>


__global__ void kernel(int* a, int* b, int* c, int N) {
    int i = blockIdx.x * blockDim.x + threadIdx.x;

    if (i < N)
        c[i] = a[i] + b[i];
}


int main(void) {
    const int N = 5; // Number of elements in the arrays to be added together
    // Allocate memory on the host (using predefined arrays )
    int h_a[N] = { 0,10,20,30,40 }, h_b[N] = { 10,20,30,40,50 }, h_c[N] = {0};
 
    int* d_a, * d_b, * d_c; // pointers that "live" on the device

    cudaMalloc((void**)&d_a, N * sizeof(int)); // allocate memory on the device, cast to void double pointer?
    cudaMalloc((void**)&d_b, N * sizeof(int));
    cudaMalloc((void**)&d_c, N * sizeof(int));


    cudaMemcpy(d_a, h_a, N * sizeof(int), cudaMemcpyHostToDevice); // copy the values of the host arrays a and b onto the device
    cudaMemcpy(d_b, h_b, N * sizeof(int), cudaMemcpyHostToDevice);

    int threads_per_block = 256;
    int blocks_per_grid = (N + threads_per_block - 1) / threads_per_block;
    // [Note to self] Look into how to properly distribute threads across blocks

    kernel<<<blocks_per_grid, threads_per_block >>>(d_a, d_b, d_c, N); // execute the kernel

    cudaDeviceSynchronize(); // wait for each thread to finish since they may not finish at the same time

    cudaMemcpy(h_c, d_c, N * sizeof(int), cudaMemcpyDeviceToHost); // Copy the result back to the host

    cudaFree(d_a); // deallocate memory on the device
    cudaFree(d_b);
    cudaFree(d_c);

    for (int i = 0; i < N; i++) { // print the results for verification
        printf("%d = %d + %d\n", h_c[i], h_a[i], h_b[i]);
    }

    free(h_a); // deallocate memory on the host
    free(h_b);
    free(h_c);

    return 0;
}
