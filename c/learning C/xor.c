#include<stdio.h>

int main()
{
    int a = 3 , b = 4;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

     printf("After XOR , a = %d and b = %d", a , b);

     return 0;
}