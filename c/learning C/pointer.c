/*
 
Pointer is a variable which is capable of storing the initial 
address of the object which it wants to point to.

"Pointing to" means it will simply store the base address of the
object.

Data Type of Pointer refers to the type of value that the pointer 
will point to.

Value of operator (denoted by *) is an operator that is used to access 
the value stored at the location pointed by the pointer.

We can also change the value of the object pointed by the pointer.

 */

#include<stdio.h>

int main()
{
    int x = 5 , *pointer = &x;
    *pointer = 4;

    printf("%d\n", *pointer);
}

// Here '&' represent Address of Variable 