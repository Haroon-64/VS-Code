#include<stdio.h>

int main()
{
    int i = 1024;
    for(;i;i>>=1)
    {
        printf("Hello World\n");
    }
}

//  i>>=1
//  i = i >> 1  (bitwise rightshift)