#include <stdio.h>
#include <stdlib.h>
 //stdlib.h is needed for malloc and free 
   //malloc is used to allocate memory dynamically
       //free is used to free the memory allocated dynamically
struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

struct node *insertNode(struct node *head, int data){
    struct node *newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }else{
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    return head;
};


int main()
{

    struct node *head = NULL;

    struct node *n1 = (struct node*)malloc(sizeof(struct node));
    head->next = n1;
    n1->data = 10;
    n1->next = NULL;

    struct node *n2 = (struct node*)malloc(sizeof(struct node));
    n1->next = n2;
    n2->data = 20;
    n2->next = NULL;

    struct node *n3 = insertNode(head, 30);
    struct node *n4 = insertNode(head, 54);
    struct node *n5 = insertNode(head, 76);
    
}