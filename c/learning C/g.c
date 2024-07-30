#include<stdio.h>

int main()
{
    int x , y, z ;

    for(x=1;x<=6;x++)
    {
        printf("\t\t");
        
        for(y=1;y<=x;y++)
        {
            printf("\b");
            for(z=1;z<=x;z++)
            {
                printf("*");
            }
             printf("\n");
          
        }




    }

    
    
   
    return 0;
}