#include<stdio.h>

int main()
{
    int var = 3;
    var = var << 4;

    printf("%d\n",var); 
}

/* When bits are shifted left then trailing positions are 
filled with zeros*/

/* Left Shift of a Number is equivalent 
to multiplication by 2^rightOperand*/

/* var = 3 
var << 4 
output : 48=(3x2^4)*/