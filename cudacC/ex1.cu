#include <iostream>
#include <cuda_runtime.h>

#define N 10000000

__global__ void vector_add(float *out, float *a, float *b, int n) {
  for(int i = 0; i < n; i++) {
    out[i] = a[i] + b[i];
  }
}

int main() {
  float *a, *b, *out;
  float *d_a, *d_b, *d_out;

  // Allocate host memory
  a   = new float[N];
  b   = new float[N];
  out = new float[N];

  // Initialize host arrays
  for(int i = 0; i < N; i++) {
    a[i] = 1.0f;
    b[i] = 2.0f;
  }

  // Allocate device memory
  cudaMalloc((void**)&d_a, sizeof(float) * N);
  cudaMalloc((void**)&d_b, sizeof(float) * N);
  cudaMalloc((void**)&d_out, sizeof(float) * N);

  // Transfer data from host to device memory
  cudaMemcpy(d_a, a, sizeof(float) * N, cudaMemcpyHostToDevice);
  cudaMemcpy(d_b, b, sizeof(float) * N, cudaMemcpyHostToDevice);

  // Launch the kernel on the GPU
  vector_add<<<1,256>>>(d_out, d_a, d_b, N);

  // Transfer the result from device to host memory
  cudaMemcpy(out, d_out, sizeof(float) * N, cudaMemcpyDeviceToHost);

  // Print the first 10 elements of the result
  for(int i = 0; i < 10; i++) {
    std::cout << "out[" << i << "] = " << out[i] << std::endl;
  }

  // Cleanup
  cudaFree(d_a);
  cudaFree(d_b);
  cudaFree(d_out);
  delete[] a;
  delete[] b;
  delete[] out;

  return 0;
}
