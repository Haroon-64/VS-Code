#include<iostream>
using namespace std;

int main()
{
int** arr2 = new int*[5]; //create an array of pointers
for(int i=0; i<5; i++)
    arr2[i] = new int[5]; // point each pointer to an array
    //arrays may not be contiguous
    
int * arr = new int[25]; // create a contiguous array
for(int i=0; i<5; i++)
{
    for(int j=0; j<5; j++)
    {
        arr[i*5+j] = 0; // increament i by 5 every time to get to the next row
    }
}
cout<<arr2[0][5]<<endl;
for (int i=0; i<5; i++)
    delete [] arr2[i]; // delete each array
delete [] arr2; // delete the array of pointers

}