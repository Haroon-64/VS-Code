#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    while(n!=0)
    {
        if(n<0)
        printf("Negative",n);
        break;
        printf("Enter a Number :");
        scanf("%d",&n);
    }
}