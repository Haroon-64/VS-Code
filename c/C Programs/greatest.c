#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter A :");
    scanf("%d",&a);

     printf("Enter B :");
    scanf("%d",&b);

     printf("Enter C :");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("a");
    }
    else if(b>a && b>c)
    {
        printf("b");
    }
    else if(c>a && c>b)
    {
    printf("c");
    }
    else
    printf("some numbers ar equal");
}