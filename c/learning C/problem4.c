#include<stdio.h>

int main()
{
    unsigned int i = 500;
    while(i++ != 0);

    printf("%d",i);
    return 0;
}
/* Range of unsigned int (4 Bytes)
is 0 to 4294967295

When i reaches the max value ie 4294967295 ,
then because of i++ , it comes back again to zero

As 0 not equal to 0 is False Therefore we come 
outside of the while loop

and after that i=1 will be printed because of post
 increamentation */