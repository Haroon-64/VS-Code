#include<stdio.h>
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    int y[9];
    int i;
    int max=x[0];
    for(i=0;i<10;i++)
    {

        if( x[i]>max)
        {
            max=x[i];
        }
    
    }
    
    for (i = 0; i < 10; i++) {
        if (x[i]!= max) 
        {
            y[i]=x[i];
        }
    }

    int j=y[0];

for (i=0;i<10;i++)
    {

        if(y[i]>j)
        {
            j=x[i];
        }
    
    }
    printf("%d",j);
}