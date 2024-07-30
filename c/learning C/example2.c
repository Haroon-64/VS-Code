#include<stdio.h>

#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"

int main()
{
    int var = 052;
    printf("%d\n",var);
    printf("%o\n",var);

    printf(STRING, NESO);
    return 0;
}
/* When there is zero infront of a number 
that number is treated as an octal number*/
/* Format specifier for a octal value is %o*/
/* Strings are represented in double quotes inside printf 
like printf("%s\n", "Hello"); */