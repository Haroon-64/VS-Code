#include<stdio.h>

int main()
{
    int n = 5;
    if(n==4)
    {
        printf("n is 4");
        n++;
    }
    printf("%d\n",n);
    
    int i=5;
    if(i==4)
    printf("i is 4");
    i++;
    printf("%d\n",i);
}

//brackets are important but without it code can still execute 