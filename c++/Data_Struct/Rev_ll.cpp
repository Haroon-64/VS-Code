#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node * next;
};
void create();
void Display();
void reverse();

Node * head = nullptr;
Node * tail = nullptr;

int main(){
    create();
    Display();
    reverse();
    cout<<"after reversing \n";
    Display();
}

void reverse(){
    Node *prev,*curr,*next;
    prev=nullptr;
    curr=head;
    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

void rev_using_stack(){
    stack<Node *> S;
    Node *temp=head;
    while(temp!=nullptr){
        S.push(temp);
        temp=temp->next;
    }
    temp=S.top();
    head=temp;
    S.pop();
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=nullptr;
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
    Node *temp;
    temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<"  \n";
        temp=temp->next;
    }   }