#include <stdio.h>
#include <math.h>
void root(int a,int b,int c);
int main() {
    int a,b,c;
    printf("enter the coeff a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    root(a,b,c);
    return 0;
}
void root(int a,int b,int c)
{
    int d;
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("no real root");
    }
    else if(d==0)
    {
        printf("one real root");
        printf("root is %f",(-b)/(2*a));
    }
    else
    {
        printf("two real root");
        printf("root is %f and %f",((-b+sqrt(d))/(2*a)),((-b-sqrt(d))/(2*a)));
    }
}
