#include<stdio.h>

int main()
{
    int a = 10;
    int b = --a;
    int c = b--;
    int d = --c;
    int e = d--;

    int f = a+b+c+d+e;

    printf("%d",f);

}

/* a=9 , b=8 , c=8 , d=7 , e=8 */