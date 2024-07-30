#include<stdio.h>

int main()
{
    int a,b;

    printf("enter a :");
    scanf("%d",&a);

      printf("enter b :");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a");
    }
    else if(b>a)
    {
        printf("b");
    }
    else
    {
        printf("equal");
    }
    return 0;
}