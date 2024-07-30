#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)
return 1;
else{
    printf("%d",n);
return n*factorial(n-1);
}
}


int main()
{
   int n,fact;

   printf("Enter the Number : ");
   scanf("%d", &n);
fact=factorial(n);
printf("The Factorial of %d is %d",n,fact);
}  