#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;
void create(){
    int size;
    Node*temp ,*trav;
    cout<<"Enter the size of the tree: ";
    cin>>size;
    for(int i=0;i<size;i++){
        temp = new Node;
        cout<<"Enter the data: ";
        cin>>temp->data;
        temp->left = NULL;
        temp->right = NULL;
        if(root == NULL){
            root = temp;
        }
        else{
            trav = root;
            while(1){
                if(temp->data < trav->data){
                    if(trav->left == NULL){
                        trav->left = temp;
                        break;
                    }
                    else{
                        trav = trav->left;
                    }
                }
                else{
                    if(trav->right == NULL){
                        trav->right = temp;
                        break;
                    }
                    else{
                        trav = trav->right;
                    }
                }
            }
        }
    }
}
void printPostorder(Node* node) 
{ 
    if (node == NULL) 
        return; 
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " "; 
} 
  
    int main() 
{  
    create();
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0;
  
} 