#include<iostream>

using namespace std;
int* isSsq(int n){
    int* arr = new int[3];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    return arr;

}
int main(){
    int n,x,y;
    cin>>n;

    auto arr = isSsq(n);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    
}