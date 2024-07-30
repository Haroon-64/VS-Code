#include<stdio.h>

int main()
{
    int x = (2,3,4);
    
    int a = (printf("%s\n" , "Hello!"), 5);

    printf("%d\n",x);

    printf("%d",a);
    return 0;
} 

/* Comma operator returns the rightmost operand in the 
expression and (it simply evaluates the rest of the 
operands) and finally rejects them*/

/* Comma operator haves least precedence among all
the operators in C*/

//int a = 2 , 3 , 4; 
//produces an error

//brackets have the highest precedence
