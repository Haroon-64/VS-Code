#include <cuda.h>
#include "cuda_runtime.h"   // for >2010 / cuda>5.5
#include<iostream>

using namespace std;

__global__ void addInt(int *a,int *b){
        a[0] += b[0];
        }


int main()
{
    int a =5, b=9;
    int *pa, *pb;   //device pointers
    cudaMalloc(&pa,sizeof(int));  // for actual thing wrap with if != cudaSuccess
    cudaMalloc(&pb,sizeof(int));
    
    cudaMemcpy(pa, &a, sizeof(int), cudaMemcpyHostToDevice);  // dest, point to source, size, type
    cudaMemcpy(pb, &b, sizeof(int), cudaMemcpyHostToDevice);

    addInt<<<1,1>>>(pa, pb);    // <<<blocks, threadsPerBlock>>>
    cudaDeviceSynchronize();  //wait for gpu
    cudaMemcpy(&a ,pa ,sizeof(int) , cudaMemcpyDeviceToHost);

    cout<<a;
    cudaFree(pa);
    cudaFree(pb);
    return 0;
}