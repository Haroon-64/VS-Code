#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    // * next to data type mean to store address
    // & next to variable mean to store address of variable

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    // * next to variable (dereferencing) mean value of variable
    cout<<&p<<endl;
    return 0;
}