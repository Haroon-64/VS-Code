#include<iostream>
using namespace std;

// search an element in a sorted array
// time complexity: O(logn)
// array must be sorted
int BinarySearch(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1; 
}



// Recursive binary search function
int binarySearch(int arr[], int target, int left, int right) {

    if (left > right) {
        return -1; //
    }
    int mid = left + (right - left) / 2;


    if (arr[mid] == target) {
        return mid; 
    }

    else if (arr[mid] > target) {
        return binarySearch(arr, target, left, mid - 1);
    }

    else {
        return binarySearch(arr, target, mid + 1, right);
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the element to be searched: \n";
    cin>>x;
    int result = BinarySearch(arr, n, x);
    if(result == -1){
        cout<<"\nElement is not present in array";
    }
    else{
        cout<<"\nElement is present at index "<< result;
    }
    return 0;
}