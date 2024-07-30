//linked list with create and shiw function

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    struct node *newnode,*temp;
    int n,i;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data of node %d: ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}

void show(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    struct node *head=NULL;
    head=create(head);
    show(head);   
}