#include<stdio.h>

int main()
{
    int i,n=2;
    for(i=1;i<=20;i++)
    {
        if(i==n)
        {
            n = n+2;
            //continue;
        }
        printf("%d ",i);
    }
}
//continue will not execute rest of the loop 
// but continues the loop and not terminate it
