#include<stdio.h>

int main()
{
    int i,n;
    
    printf("Enter the Numbers :");
    scanf("%d %d",&i , &n);

    if(i%n==0)
    {
        printf("%d is divisible by %d\n",i , n);
    }
    else
    {
        printf("%d is not divisible by %d",i , n);
    }
    return 0;
}