#include<iostream>

using namespace std;

// Insertion sort: Shifting each element to its correct position in the array
// Time Complexity: O(N^2)
// Space Complexity: O(N)


void insertionSort(int arr[], int n)
{

	for (int i = 1; i < n; i++){
		int temp = arr[i];
		int j = i-1;

		while (j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = temp;
	}
}


int main(){

	int n;
    cout<<"enter size \n";
    cin >> n;
	int a[n];
    cout<<"enter elements \n";
	for (int i = 0; i < n; i++){
        cin >> a[i];
	}
	insertionSort(a, n);

	for (int i = 0; i < n; i++){
        cout << a[i] << " ";
	}
	return 0;
}