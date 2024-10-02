//decimal to hex
#include<iostream>
using namespace std;
void hex(int n)
{
   if(n<10){
         cout<<n; 
   }
   else if(n==10){
       cout<<"A";
   }
   else if(n==11){
       cout<<"B";
   }
   else if(n==12){

       cout<<"C";
   }
   else if(n==13){
       cout<<"D";
   }
   else if(n==14){
       cout<<"E";

   }
   else if(n==15){
       cout<<"F";
   }
   else{
       hex(n/16);
       hex(n%16);
   }
}
int main()
{
    int n;
    cin>>n;
   hex(n);
    
   
}