#include<iostream>
#include<array>
using namespace std;
int x;
void print(int size,array<int> & arr){     //how to pass size(10) as variable

    for (int i=0;i<arr.size();i++)
        cout<< arr[i];
}

int main(){
   
    array<int, 10> A={1,2,3,4,5,6,7,8,9,0};   //possible solution could be to make this on heap or global but they seems not good ways;
    print (10,A);

}
