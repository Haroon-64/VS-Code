/* Designator could be any non negative integer 
Compiler will deduce the length of the array from the largest designator in 
the list and is equal to designator + 1 
But if there is a clash , then designated initilizer will win
example*/


#include<stdio.h>

int main()
{
    int arr[10] = {[0]=1, [4]=2, [8]=3 };
    int arrr[] = {1,2,3,[2]=4,9,7,6,5};

}