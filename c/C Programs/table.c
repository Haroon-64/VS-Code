#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter :" );
    scanf("%d\n",&a);
    
    for(b=1;b<=10;b++)
    {
    	 printf("%d x %d = %d\n",a,b,a*b);
	}
	
}