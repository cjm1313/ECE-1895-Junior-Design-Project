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
    int i = blockIdx.x * blockDim.x * threadIdx.x

    if i < N
        c[i] = a[i] + b[i]
}


int main(void) {
    const int N = 10; // Number of elements in the arrays to be added together

    int a = {0,10,20,30,40,50,60,70,80,90}, b = {10,20,30,40,50,60,70,80,90,100} // predefine some values to add together
    // Allocate memory on the host (using predefined arrays )
    int *h_a = &a, *h_b = &b, *h_c // Using the prefix h to signify the pointer lives on the host

    size_t array_size = N * sizeof(int); // Calculate the size of the array so that the program can tell the device how much mem to allocate

    int *d_a, *d_b, *d_c; // pointers that "live" on the device

    cudaMalloc((void**)&d_a, array_size); // allocate memory on the device, cast to void double pointer?
    cudaMalloc((void**)&d_b, array_size);
    cudaMalloc((void**)&d_c, array_size);


    cudaMemcpy(d_a, h_a, array_size, cudaMemCpyHostToDevice); // copy the values of the host arrays a and b onto the device
    cudaMemcpy(d_b, h_b, array_size, cudaMemCpyHostToDevice);
    
    int thread_count = 10;
    int block_count = 1; // will execute the kernel on 1 block across 10 threads. This probably is not efficient?
    // [Note to self] Look into how to properly distribute threads across blocks

    kernel<<<block_count, thread_count>>>(d_a, d_b, d_c, N); // execute the kernel

    cudaDeviceSynchronize(); // wait for each thread to finish since they may not finish at the same time

    cudaMemCpy(h_c, d_c, array_size, cudaMemCpyDeviceToHost); // Copy the result back to the host

    cudaFree(d_a); // deallocate memory on the device
    cudaFree(d_b);
    cudaFree(d_c);

    for(int i = 0; i++; i < N) { // print the results for verification
        printf("%d = %d + %d\n", h_c[i], h_a[i], h_b[i]);
    }
        
    free(h_a); // deallocate memory on the host
    free(h_b);
    free(h_c);


}
