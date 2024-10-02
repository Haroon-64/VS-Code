#include <iostream>
using namespace std;
struct Node
{
    int data;

    int priority;
 
    struct Node* next;
 
};

Node* newNode(int d, int p)
{
    Node* temp = (new Node);
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
 
    return temp;
}

int peek(Node** head)
{
    return (*head)->data;
}

void pop(Node** head)
{
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void push(Node** head, int d, int p)
{
    Node* start = (*head);

    Node* temp = newNode(d, p);

    if ((*head)->priority > p)
    {

        temp->next = *head;
        (*head) = temp;
    }
    else
    {

        while (start->next != NULL &&
            start->next->priority < p)
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

int isEmpty(Node** head)
{
    return (*head) == NULL;
}

int main()
{

    Node* pq = newNode(3, 6);
    push(&pq, 2, 2);
    push(&pq, 1, 5);
    push(&pq, 4, 4);
 
    while (!isEmpty(&pq))
    {
        cout << " " << peek(&pq);
        pop(&pq);
    }
    return 0;
}