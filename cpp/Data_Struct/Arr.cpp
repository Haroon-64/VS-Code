#include<iostream>
using namespace std;

class Arr
{
public:
    int size;
    int *arr =new int[size];
public:
    Arr():size(0){    
    };
    ~Arr()
    {   
        delete []arr;
        cout<<"Array is deleted"<<endl;
    }
    Arr(int s){
        size=s;
        arr=new int[size*2];
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<i+1<<" element: ";
            cin>>arr[i];
        }
    }
    void insert();
    void deletion();
    void search();
};

int main(){   
    int choice;
    Arr *a=new Arr(5);
    cout<<"1. Insertion"<<endl;
    cout<<"2. Deletion"<<endl; 
    cout<<"3. Search"<<endl;

    cout<<"Enter the choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        a->insert();
        break;
    case 2:
        a->deletion();
        break;
    case 3:
        a->search();
        break;
    default:
        break;
    }
}

void Arr::insert(){
    int pos;
    int ele;
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the element: ";
    cin>>ele;
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Arr::deletion(){
    int pos;
    cout<<"Enter the position: ";
    cin>>pos;
    for(int i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Arr::search(){
    int ele;
    cout<<"Enter the element: ";
    cin>>ele;
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            cout<<"Element is found at "<<i+1<<" position"<<endl;
            break;
        }
    }
}