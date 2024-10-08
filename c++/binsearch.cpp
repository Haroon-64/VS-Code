#include<iostream>

using namespace std;

int Bsearch(int x[7],int a){

    int low=0,high=7;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(x[mid]==a)
            return a;
        if(a>x[mid])
                low =mid +1;
        else{
                high =mid-1;
        }
        
    }
    return -1;
}


int main(){
    int x[] = {1,4,6,12,43,44,50};
    int a;
    cin>>a;
    cout<<endl;
    int y = Bsearch(x,a);
    if(y==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at "<<y;
    }
}