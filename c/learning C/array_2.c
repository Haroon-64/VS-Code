//pointers
#include <stdio.h>
#include <string.h>
int main()
{
int a[5]={1,2,3,4,5};
int *p=&a;
p++;
printf("%d",*p);
return 0;

}
