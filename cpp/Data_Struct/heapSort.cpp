#include<iostream>
using namespace std;


void heap(int arr[], int n, int i) {
   int temp;
   int largest = i;
   int l = 2 * i + 1;
   int r = 2 * i + 2;
   if (l < n && arr[l] > arr[largest])
      largest = l;
   if (r < n && arr[r] > arr[largest])
      largest = r;
   if (largest != i) {
      temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heap(arr, n, largest);
   }
}


void heapSort(int arr[], int n) {
   int temp;
   for (int i = n / 2 - 1; i >= 0; i--)
      heap(arr, n, i);
   for (int i = n - 1; i >= 0; i--) {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heap(arr, i, 0);
   }
}


int main() {
   int arr[] = { 20, 7, 1, 54, 10, 15, 90, 23, 77, 25};
   int n = 10;
   int i;
   cout<<"Given array is: "<<endl;
   for (i = 0; i<n ;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   heapSort(arr, n);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; ++i)
   cout<<arr[i]<<" ";
}