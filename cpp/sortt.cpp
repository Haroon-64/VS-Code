#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int arr[5] = {5,4,3,2,1};
    sort(arr, arr+5); // time complexity O(nlogn)
    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    // int arr2[5] = {5,46,6,5,1};
    // sort(arr2, arr2+5, greater<int>()); // sort in descending order
    // for(int i=0; i<5; i++)
    //     cout<<arr2[i]<<" ";
    // cout<<endl;

    // int arr3[5] = {1,46,6,5,4};

    // sort(arr3, arr3+5, [](int a, int b){
    //     if (a==5){
    //         return true;  //keep 5 in the first position 
    //     }
    //     else if (b==5){
    //         return false; // keep 5 in the first position
    //     }
    //     else
    //     return a>b;}); // sort in descending order based of 2 values in the array

    // for(int i=0; i<5; i++)
    //     cout<<arr3[i]<<" ";
    // cout<<endl;
    
}