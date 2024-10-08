#include<iostream>
using namespace std;


int Search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the element to be searched: \n";
    cin>>x;
    int result = Search(arr, n, x);
    if(result == -1){
        cout<<"\nElement is not present in array";
    }
    else{
        cout<<"\nElement is present at index "<< result;
    }
    return 0;
}