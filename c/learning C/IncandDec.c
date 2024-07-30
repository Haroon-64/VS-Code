#include<stdio.h>

int main()
{
    int x,y,a=10,b=10;
    int c=10,d=10;
    int e=10,f=10;
    int g=4,h=3;

    x=a++;
    y=++b;

    printf("%d\n",x);

    printf("%d\n",y);

    printf("%d\n",c+++d);
    
    printf("%d\n",e+ ++f);

    //printf("%d\n", g+++++h);
    //lexical analyser casts an error for ++

}


//L Value
/* we increament a Lvalue 
 i.e an object that has an identificable location in memory
 it should be a variable 
 Lvalue cannot be a function */


//R Value
 /* Rvalue means an object that has no identifiable location 
 in memory 
 Anything which is capable of returning a constant expression 
like a+b */

//we cant do (a+b)++;
//because it is a rvalue.


/* In short rvalue is something that has a capablity of 
returning some constant value while lvalue is something
that has a capablity of holding some value */


//++a is pre increament 
//a++ is post increament

/*lexical analyser scans the code and generate tokens */