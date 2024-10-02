//1) cout is an object of ostream class and cin is an object of istream class 
//2) These operators must be overloaded as a global function. 
//And if we want to allow them to access private data members of the class,
// we must make them friend. 


#include<iostream>
using namespace std;
class exin
{
    int x;
public:
exin (): x(0){}
//use << operator to print the value of a
    friend ostream & operator << (ostream &out, exin &a)
    {
    out << a.x;
    return out;
    }
    friend istream & operator >> (istream &in, exin &a)
    {
    in >> a.x;
    return in;
    }


};


int main()
{
    exin a;
    cout << a;
    return 0;
}




