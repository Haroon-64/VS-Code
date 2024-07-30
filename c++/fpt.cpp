//function pointers
#include<iostream>
#include<functional>
using namespace std;


void print(int a[], function<void(int)> fp,int size)   
{
    
    for(int i=0;i<size;i++)
        fp(a[i]);  // iterates through the array and calls the function
}
int main()
{
    /*auto x = &fpt;     // & is implicit
    void (*y)() = fpt;   // as used in c 
    x();               
    y();*/

    int a[5] = {1,2,3,4,5};
    int size=5;
    auto fux =[&](int x){cout<<x<<endl;}; // [](parameters){body}  // lambda function [] capture method to capture variables from the environment . beccome part of the function object
    //= means capture all variables by value & means capture all variables by reference or you can specify the variables to be captured

    print(a,fux,size);   



}