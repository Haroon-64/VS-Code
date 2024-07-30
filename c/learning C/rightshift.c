#include<stdio.h>

int main()
{
    int var = 34;
    var = var >> 3;

    printf("%d\n",var);

}


/* When bits are shifted right then leading positions
 are filled with zeros*/

 /* Right Shift of a Number is equivalent to 
 division by 2^rightOperand*/

 /* var = 34
 var >> 3
 output : 4=(34/2^3) eliminate decimal points*/