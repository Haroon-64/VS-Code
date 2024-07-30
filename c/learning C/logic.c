#include<stdio.h>

int main()
{
    int a = 5 , b = 3 , c = 6;
    int d = 7 , e = 8;
    int inc , ind , ine , inf;

    inc = (a>b) && (b++);
    ind = (a>c) && (c++);
    ine = (a>b) || (d++);
    inf = (a<b) || (e++);


    //Short Circuit 
    //if 1st condition is true 
    //then 2nd condition will be evaluated and so on

    printf("%d\n",inc);
    printf("%d\n",b);

    printf("%d\n",ind);
    printf("%d\n",c);

    printf("%d\n",ine);
    printf("%d\n",d);

    printf("%d\n",inf);
    printf("%d\n",e);
    
    return 0;
}