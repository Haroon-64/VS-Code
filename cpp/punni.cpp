#include<iostream>
using namespace std;

struct pos
{
    int a;
    int b;
};
struct u{
    union //generally anonym
    {
       float a;
       int b;
    };
    
};

struct vector2
{
    float a,b;
};

struct vector4
{
    union 
    {
        struct
        {
            float x,y,z,w; // union of size 4*float
        };
        struct
        {
         vector2 l,m;  //l will be same as xy , m as zw   
        };
        
        
    };
    
};



int main(){

    int a = 10;
    double val = *(double*)&a;  //directly copy bits in a to val // only initial 4 bits are copied rest are uninitialized and out of bound (voilation of memory)
    // works in unions 
    cout<<val<<endl;

    u x;
    x.a=2;
    cout<<x.a<<endl<<x.b<<endl; //b has same byte repre as a

    pos p={1,2};
    int* ptr = (int*)&p;  // cast to int pointer , works as array of int
    cout<<ptr[0]<<ptr[1]<<endl;  
}