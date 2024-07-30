#include<stdio.h>

int fun_1();
int fun_2();

int main()
{
    int a;
    a = fun_1() + fun_2();
    printf("%d\n", a);

}

/* operator with higher precedence will be evaluated first*/ 


int fun_1()
{
    printf("Zahaan");
}

int fun_2()
{
    printf("Javaid");
}
