#include<iostream>
using namespace std;

class Base{
public:
virtual void fun(){};

};

class A:public Base{

};
class B:public Base{



};

int main(){
        A * obj = new A();
    Base * obj2 = new A();   // implicit conversion of sub class to base class
    //A* obj3 = new Base();  // error: cannot convert ‘Base*’ to ‘A*’

    Base * Bo = new B();
  //  A* obj4 = (A*)Bo;  // explicit conversion of base class to sub class
    //this conversion is not safe as obj4 and bo are different objects

    A* obj4 = dynamic_cast<A*>(Bo);  // dynamic_cast is safe as it checks for the type of object and returns NULL if the type is not matched
    cout<<obj4<<endl; //return null as dynamic_cast failed
    //dynamic_cast requires the two classes to be polymorphic (have at least one virtual function)

    A* obj5 = dynamic_cast<A*>(obj);  // successfull conversion
    cout<<obj5<<endl;    //return the address of obj as dynamic_cast succeeded
}