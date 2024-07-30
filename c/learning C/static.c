#include<stdio.h>
#include<stdlib.h>

int increament()
{
    static int count;
    count = count + 1;
    return count;
}

int main()
{
    int value;
    value = increament();
    value = increament();
    value = increament();

    printf("%d",value);
    return 0;
    
}


/* Static variable remains in memory even if it is declared 
within a block on the other hand automatic variable is destroyed 
after the completion of function in which it is declared */
/* Static variable if declared outside the scope of any function 
will act like global variable but only within the file in 
which it is declared*/
/* We can only assign a constant value to a static variable*/