#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

//Tree Traversal Technique 

//In-Order Traversal
void inorderTraversal(Node* root){
    if(root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    root->left=a;
    root->right=b;
    Node* c=new Node(4);
    Node* d=new Node(5);
    a->left=c;
    a->right=d;

    inorderTraversal(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}