#include<stdio.h>

int main()
{
    int x = 2;

    switch(x)
    {
        case 1: printf("x is 1");
        

        case 2: printf("x is 2");
        

        case 3: printf("x is 3");
        break;

        default : printf("x is a number other than 1, 2 and 3");
        break;
    }
}

// not allowed to add duplicate cases
// only those expressions are allowed in switch which results in integral constant value
// float value is not allowed as a constant value in case label .
// only integer constants/constant expressions are allowed in case label
// variable expressions are not allowed in case labels.although macros are allowed 
