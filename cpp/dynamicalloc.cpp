#include<iostream>
using namespace std;
int main()
{
    //variables in main are stored on the main stack frame
    //variables in function are removed from the stack frame when function is done
    //global variables are stored in the global stack frame
    //dynamic memory allocation is used to allocate memory on the heap
    //heap is a part of the memory that is not managed by the compiler

int *p=new int; //allocates memory for an integer on the heap and returns the address of the memory. so pointer is used to store the address
*p=10; //dereferencing the pointer and storing the value 10 in the memory location
cout<<*p<<endl;
cout<<p<<endl;
delete p; //deallocates the memory as it is no longer needed and prevents memory leak
}