#include<iostream>
#include<chrono>
#include<cmath>

double powerOfTen(int n);
double squareRoot(double a);

using namespace std;
int main(){

      

    double a;
    cout << "Enter a number: ";
    cin >> a;


    auto t1 = chrono::high_resolution_clock::now();

    cout << "The square root of " << a << " is " << squareRoot(a) << endl;

    auto t2 = chrono::high_resolution_clock::now();

    chrono::duration<double> d =t2-t1;
    cout<<d.count()<<endl;
}

double squareRoot(double a)

{     
  double z = a; 
  double rst = 0.0;
  int max = 8;     // to define maximum digit 
  int i;
  double j = 1.0;
  for(i = max ; i > 0 ; i--)
  {
   // value must be bigger then 0
    if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)         
    {
      while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
      {
        j++;
        if(j >= 10) 
        break;
      }
      j--; //correct the extra value by minus one to j
      z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of z
      rst += j * powerOfTen(i);     // find sum of a
      j = 1.0;
    }
 
  }
  for(i = 0 ; i >= 0 - max ; i--)
  {
  if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
  {
    while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
    {
      j++;
    }
    j--;
    z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of z
    rst += j * powerOfTen(i);     // find sum of a
    j = 1.0;
  }
  }
   // find the number on each digit
return rst;
 }
double powerOfTen(int n)
{
  double result = 1.0;
  if(n > 0)
  {
    for(int i = 0; i < n; i++)
    result *= 10.0;
  }
  else if(n < 0)
  {
    for(int i = 0; i > n; i--)
    result /= 10.0;
  }
return result;
}
