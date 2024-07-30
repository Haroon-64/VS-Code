#include<stdio.h>


int main()
{
    int n, total=1, k=0, number;
    printf("\nEnter the number of elements you want to multiply:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total*number;
        k=k+1;
    }
    printf("Product of %d numbers = %d \n", n ,total);
}