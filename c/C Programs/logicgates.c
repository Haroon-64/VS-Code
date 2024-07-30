

#include<stdio.h>

int main()
{
    int a , b  , n ,  and , or , not , nand , nor , xor;

    printf("Enter the Inputs : ");
    //INPUT SHOULD BE BINARY 

    scanf("%d %d ",&a,&b);

    and = a && b;
    or = a || b;
    nand = !(a && b);
    nor = !(a || b);
    


    printf("AND output is %d\n",and);
    printf("OR output is %d\n",or);
    printf("NAND output is %d\n",nand);
    printf("NOR output is %d\n",nor);
     
    
}