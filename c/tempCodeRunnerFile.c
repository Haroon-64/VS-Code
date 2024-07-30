#include<stdio.h>

void main()
{
int x;
int y=1 ;
int i;
scanf("%d",&x);

      for(i=2;i<=(x/2);i++){
        if(x%i==0) {
        y=0;
        break;
        }}
    if(y==0){
        printf("not prime");
    }
    else{
        printf("prime");
    }
}

