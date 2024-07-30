/* Function is basically a set of statements that takes input ,
performs some computation and produces some output

  Syntax : Return_type  function_name  (set_of_inputs);  

 Importance of functions :
1. Reusablity
2. Abstraction

Example
*/

#include<stdio.h>

int areaOfRect(int length , int breadth)
{
    int areaR;
    areaR = length * breadth;
    return areaR;
}

int areaOfCir(int radius)
{
    int areaC;
    areaC = 3.14*radius*radius;
    return areaC; 
}

int main()
{
    int l = 10, b = 5;
    int r = 10;

    int areaR = areaOfRect(l,b);
    printf("%d\n",areaR);

    int areaC = areaOfCir(r);
    printf("%d\n",areaC);

}