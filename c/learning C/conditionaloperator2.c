

#include<stdio.h>

int main()
{
    int num , var = 75 , var2 = 56;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d",num);
    return 0;

}