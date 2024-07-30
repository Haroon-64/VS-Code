#include<stdio.h>
#include<math.h>

int main()
{
    int x , sqr;
    int i , num , count=0;

    printf("Enter the Number :");
    scanf("%d",&x);

    sqr = ceil(sqrt(x));
    num = x;

    for(i=2;i<=sqr;i++)
    {
        if(num%i == 0)
        count = 1;
    }
    if((count == 0 && num != 1) || num == 2 || num == 3)
    printf("%d is a Prime Number",num);
    else
    printf("%d is not a Prime Number",num);

    return 0;
}