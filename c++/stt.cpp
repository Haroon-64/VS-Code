#include<iostream>
using namespace std;

class stack
{
    
    int x[5];
    int top = -1;
public:
    void push(int);
    void pop();
    void display();

};

int main()

  //missing stop switch if stack is empty or full
{
    stack s;
    int ch, item;
    while (1)
    {
        cout << "1.push\n2.pop\n3.display\n4.exit\n";
        cout << "enter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the item";
            cin >> item;
            s.push(item);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "invalid choice";
        }
    }
    return 0;
}



void stack::push(int item)
{
    if (top == 4)
    {
        cout << "stack is full"<<endl;
        //didnt work in old compiler
    }
    else
    {
        top++;
        x[top] = item;
    }
}
void stack::pop()
{
    if (top == -1)
    {
        cout << "stack is empty";
        //looped in old compiler
    }
    else
    {
        cout << "deleted item is" << x[top];
        top--;
    }
}

void stack::display()
{
    if (top == -1)
    {
        cout << "stack is empty";
      
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << x[i] << "\t";
        }
        cout << endl;
    }
}