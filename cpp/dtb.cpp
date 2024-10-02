//convert decimal to binary and store in variable

#include <iostream>
using namespace std;

void Binary(int x,long long int *b)
{ 
    if(x==0)
    {
        *b=0;
    }
    if(x==1)
    {
        *b=1;
    }
    else
    {
        Binary(x/2,b);
        *b= *b*10 + x%2;   
    }   
}

int main ()
{
    int x;
    long long int c;
    long long int *b=&c;
    cin>>x;
    Binary(x,b);
    cout<<*b;
}