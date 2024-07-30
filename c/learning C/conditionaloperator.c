#include<stdio.h>

int main()
{
    int marks;
    char result;

    printf("Enter Marks : ");
    scanf("%d",&marks);

    result = (marks > 30) ? 'p' : 'f';

    printf("%c", result);
    return 0;

}