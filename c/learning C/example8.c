#include<stdio.h>

int main()
{
    int i=1,j=1;
    int seq[9] = {34,56,54,32,67,89,90,32,21};

    for(;i<=9;i++)
    {
        printf("%d ",seq[i-1]);
    }

    printf("\n");

    for(;j<=9;j++)
    {
        printf("%d ",seq[9-j]);
    }
}