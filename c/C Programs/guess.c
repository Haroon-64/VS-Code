#include<stdio.h>

int main()
{
    int n = 7 , i ;

    printf("Guess the number :");

    while(1){ 
        scanf("%d",&i);

        if(i>n)
        {
            printf("Number is Bigger\n");
        }
        else if(i<n)
        {
            printf("Number is Smaller\n");
        }
        else
        {
         printf("Congratulations , Correct Guess");
         break;
        }
    }
}