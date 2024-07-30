#include<stdio.h>

int main()
{
    int number , count = 0 , result = 0 , mul = 1 , cnt , rem;
    printf("Enter the Number :");
    scanf("%d",&number);

    int q = number;
    while(q != 0 )
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q != 0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result == number)
        printf("%d is an armstrong Number",number);
    else
        printf("%d is not an armstrong Number",number);
}

/* Example of armstrong number

371 = 3*3*3 + 7*7*7 + 1*1*1

*/