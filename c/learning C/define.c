#include<stdio.h>
#define PI 3.141592
#define VALUE 89
#define add(x,y) x+y
/* Job of Preprocessor to replace name with value*/
/* first expansion then evaluation*/
/* Some predefined macros like __DATE__ , __TIME__ can 
print current date and time*/

int main()
{
    printf("%f\n",PI);
    printf("%d\n",VALUE);
    printf("%d\n", add(3,4));
    printf("DATE: %s\n", __DATE__);
    printf("TIME: %s\n", __TIME__);

    return 0;
}