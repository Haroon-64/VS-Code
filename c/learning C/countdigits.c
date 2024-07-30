#include<stdio.h>

int main()
{
    int q , count=0;

    printf("Enter the Number :");
    scanf("%d",&q);


    while(q != 0)
    {
        q = q/10;
        count++;
    }
    printf("Number of Digits = %d",count);
    return 0;
}

/* let us take 371 

371/10 = 37
count = 1

37/10 = 3
count = 2

3/10 = 0
count = 3

So number of digits are 3*/