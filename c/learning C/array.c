/* Data Structure is a Format for organising and storing data.

An Array is a Data Structure containing a number of Data Values
(ALL OF WHICH ARE OF SAME TYPE).

syntax: data_type nameofArray[no. of elements];

length of array is equal to no. of elements (+ive integers)

Inorder to access an array element , just write:
        array_name[index]
    index = length of array - 1;

If the number of elements are lesser than the length of the array than
the rest of the locations are automatically filled with Zero.

At the Time of initialisation , never leave these curly braces empty
and also never exceed the limit of number of elements specifically by
the length of an array.

*/

#include<stdio.h>
#define N 10

int main()
{
    int a[9];
    for(int i=0;i<9;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<9;i++)
    {
    printf("%d",a[i]);
    }
}