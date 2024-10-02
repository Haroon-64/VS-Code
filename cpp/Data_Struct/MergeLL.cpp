#include<iostream>
using namespace std;

struct Node{
    public:
        int data;
        Node *next;
    };
    
Node* head1 = NULL;
Node* tail1 = NULL;
Node* head2 = NULL;
Node* tail2 = NULL;
Node* head3 = NULL;
Node* tail3 = NULL;

void Merge(){
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            if(head3==NULL){
                head3 = temp1;
                tail3 = temp1;
            }
            else{
                tail3->next = temp1;
                tail3 = temp1;
            }
            temp1 = temp1->next;
        }
        else{
            if(head3==NULL){
                head3 = temp2;
                tail3 = temp2;
            }
            else{
                tail3->next = temp2;
                tail3 = temp2;
            }
            temp2 = temp2->next;
        }
    }
    if(temp1!=NULL){
        tail3->next = temp1;
    }
    if(temp2!=NULL){
        tail3->next = temp2;
    }
}

int main(){
    int n1,n2;
    cout<<"Enter the number of nodes in first list: ";
    cin>>n1;
    cout<<"Enter the number of nodes in second list: ";
    cin>>n2;
    Node *temp;
    for(int i=0;i<n1;i++){
        temp = new Node();
        cout<<"Enter the data: ";
        cin>>temp->data;
        temp->next = NULL;
        if(head1==NULL){
            head1 = temp;
            tail1 = temp;
        }
        else{
            tail1->next = temp;
            tail1 = temp;
        }
    }
    for(int i=0;i<n2;i++){
        temp = new Node();
        cout<<"Enter the data: ";
        cin>>temp->data;
        temp->next = NULL;
        if(head2==NULL){
            head2 = temp;
            tail2 = temp;
        }
        else{
            tail2->next = temp;
            tail2 = temp;
        }
    }
    Merge();
    temp = head3;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}

