#include<stdio.h>

int main()
{

    int i = 5;
    int var = sizeof(i++);
    printf("%d %d", i,var);
    return 0;
 
}

// According to C99 standard:

/*The sizeof operator yeilds the size (in bytes) of its operand ,which 
may be an expression or a paranthesized name of a type. The size is determined 
from the type of the operand. If the type of the operand is a variable length 
array type, then the operand is evaluated and the result is an integer constant*/
