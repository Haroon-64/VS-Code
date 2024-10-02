#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};
void create();
void Display();
void sort();

Node * head = nullptr;
Node * tail = nullptr;

int main(){
    create();
    Display();
    sort();
    cout<<"after sort \n";
    Display();
}

void sort(){
    Node *trav=head;
    int size,temp;
    while(trav->next!=nullptr)
        {
            size++;
            trav=trav->next;
        }
    trav=head;
    for(int j=0;j<size;j++)
    for(int i=0;i<(size-1);i++)
    {
        if(trav->data<trav->next->data)
        {
            //swap
            temp=trav->data;
            trav->data=trav->next->data;
            trav->next->data=temp;
        }
        trav=trav->next;
    }
}
void create(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    Node *temp;
    for(int i=0;i<n;i++){
        temp=new Node;
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>temp->data;
        temp->next=nullptr;
        if(head==nullptr){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }    }    }
void Display(){
    Node *p;
    p=head;
    while (p!=nullptr)
    {
        cout<<p->data<<"  \n";
        p=p->next;
    }   }