#include <iostream>
using namespace std;
  
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int   left, int   mid, int   right)
{
    int    L = mid - left + 1;
    int   R = right - mid;
  

    int *leftArray = new int[ L],
         *rightArray = new int[R];
  
    // Copy data to temp arrays
    for (int i = 0; i <  L; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < R; j++)
        rightArray[j] = array[mid + 1 + j];
  
    int iL = 0, 
        iR = 0; 
    int iA = left; 
  
    // Merge the temp arrays back into array[left..right]
    while (iL <  L && iR < R) {
        if (leftArray[iL] <= rightArray[iR]) {
            array[iA] = leftArray[iL];
            iL++;
        }
        else {
            array[iA] = rightArray[iR];
            iR++;
        }
        iA++;
    }
    // Copy the remaining elements of left[]
    while (iL <  L) {
        array[iA] = leftArray[iL];
        iL++;
        iA++;
    }
    // Copy the remaining elements of right[]
    while (iR < R) {
        array[iA] = rightArray[iR];
        iR++;
        iA++;
    }
}
  

void mergeSort(int array[], int   begin, int   end)
{
    if (begin >= end)  return; // base condition
  
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
  

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
  

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    unsigned int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Given array is \n";
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}