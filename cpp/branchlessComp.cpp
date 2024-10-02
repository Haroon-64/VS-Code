#include<iostream>
using namespace std;
int smaller(int a, int b){
    return a*(a<b) + b*(b<a);  //will be slower as if else wouldve been optimized better by compiler
}

char upper(char a)
{
    return (a-=32*(a>='a' && a<='z'));  //removes branches 
}
int main(){
    int a,b;
cout<<"to comp";
cin>>a>>b;
cout<<smaller(a,b)<<"\nchar to upper\n";

char y;
cin>>y;
cout<<upper(y);

}