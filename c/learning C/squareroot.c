#include<stdio.h>
#include<math.h>


int main()
{
    float x , sqr , sif;

    printf("Enter a Number :");
    scanf("%f",&x);

    sqr = sqrt(x);
    printf("%f is the SquareRoot\n",sqr);

    sif = ceil(sqr);
    printf("%f is the smallest integer greater than or equal to SquareRoot",sif);

    return 0;
}