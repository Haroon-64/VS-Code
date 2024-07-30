#include<iostream>

using namespace std;

void insert();
void deletion();
void create();
void Display();
void Clear();

struct Node{
    public:
        int data;
        Node *next;
    };
    
Node* head = NULL;
Node* tail = NULL;



int main(){
    while(1){
    int choice;
    cout<<"1. Insertion"<<endl;
    cout<<"2. Deletion"<<endl;
    cout<<"3. create"<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Delete list"<<endl;

    cout<<"Enter the choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        deletion();
        break;
    case 3:
        create();
        break;
    case 4:
        Display();
        break;
    default:
        Clear();
        exit(0);
    }
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
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
       
    }
}

void insert(){
    Node *temp=new Node,*trav;
    int a,choice;
    trav=head;
    cout<<"Enter the element/location: ";
    cin>>a;
    cout<<"1. Insertion in front"<<endl<<"2. Insertion at the end"<<endl;
    if(choice==2){
        while (trav->data!=a)
        {
            trav=trav->next;
        }
        temp->next=trav->next;
        trav->next=temp;
        if(trav==tail){
            tail=temp;
        }
        if(trav==head){
            head=temp;
            temp->next=trav;
        }
        cout<<"enter the element: ";
        cin>>temp->data;
        }
    else{
        //insert before the element
        while (trav->next->data!=a)
        {
            trav=trav->next;
        }
        temp->next=trav->next;
        trav->next=temp;
        cout<<"enter the data: ";
        cin>>temp->data;

    }    
}

void deletion(){
    Node *temp,*tr;
    int a;
    tr=head;
    cout<<"Enter the element/location: ";
    cin>>a;
    while (tr->data!=a)
    {
        temp=tr;
        tr=tr->next;
    }
    temp->next=tr->next;
    delete tr;
}

void Display(){
    Node *trav;
    trav=head;
    while (trav!=NULL)
    {
        cout<<trav->data<<" "<<endl;
        trav=trav->next;
    }
}

void Clear(){
    Node *temp=new Node,*trav;
    trav=head;
    while (trav!=NULL)
    {
        temp=trav;
        trav=trav->next;
        delete temp;
    }
}