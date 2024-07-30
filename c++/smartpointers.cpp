#include<iostream>
#include<memory> //smart pointers are stored in the memory header
using namespace std;
class Ptr
{
    int *ptr;
    public:
    Ptr(int *p=NULL)
    {
        ptr=p;
        cout<<"constructor called"<<endl;
    }
    ~Ptr()
    {
        delete(ptr);
        cout<<"destructor called"<<endl;
    }
    void Print()
    {
        cout<<"call "<<endl;
    }
   
};
int main()
{
{
unique_ptr<Ptr> p(new Ptr());   // constructor of unique pointer needs to called explicitly p=new Ptr() is implicit conversion of ptr / not allowed
unique_ptr<Ptr> p2=make_unique<Ptr>(); //make_unique is used to create a unique pointer and it is more efficient than new and prevents unused pointer if the constructor throws an exception
p->Print();   //arrow operator is used to access the member functions of the class using the pointer equialent to (*p).Print()
}

cout<<"out of scope"<<endl;



{
shared_ptr<Ptr> p3= make_shared<Ptr>(); // uses reference counting to delete the memory when the last pointer goes out of scope  
//not use new as shared pointer stores reference count in the memory/control block
shared_ptr<Ptr> p=make_shared<Ptr>();
shared_ptr<Ptr> p2=p; //shared pointer can be copied
p->Print();   
}
cout<<"out of scope 2"<<endl;

weak_ptr<Ptr> p4; //weak pointer does not increase the reference count of shared pointer


}


//smart pointers are used to manage dynamic memory allocation
//automatically call new and delete

//unique pointer is used to allocate memory on the heap and it is deleted automatically when the pointer goes out of scope and it does not allow copying 
//copying would result in double deletion of the memory/ pointers pointing to garbage values


// shared pointer is used to point to the same memory location as the unique pointer but it increases the reference count
//weak pointer is used to point to the same memory location as the shared pointer but it does not increase the reference count
