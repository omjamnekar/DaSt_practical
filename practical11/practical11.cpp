//write a program to perform the  binary tree traversal (in -order, pre-order, post-order)

#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
int data;
struct Node *left,*right;
Node(int data){
this->data= data;
this->left =NULL;
this->right =NULL;
}
};


void PreOrderTraversal(struct Node *node){
    if(node ==NULL){
        return ;
    }

    cout<<node->data<<" ";
    PreOrderTraversal(node->left);
    PreOrderTraversal(node->right);
}

void PostOrderTraversal(struct Node *node){

    if(node == NULL){
        return;
    }
     PostOrderTraversal(node->left);
    PostOrderTraversal(node->right);
    cout<<node->data<<" ";
}

void InOrderTraversal(struct Node *node){
    if(node ==NULL)
        return;
    InOrderTraversal(node ->left);
    cout<<node->data<<" ";
    InOrderTraversal(node->right);
}

int main(){

        struct Node *root =new Node(1);
        root ->left =new Node(12);
        root ->right =new Node(9);
        root ->left->left = new Node(5);
        root ->left->right= new Node(6);
        cout<<"In order Traversal:";
        InOrderTraversal(root);


        cout<<"\n Pre Order Traversal";
        PreOrderTraversal(root);

        cout<<"\n Post Order Traversal";
        PostOrderTraversal(root);
        return 0;
}


