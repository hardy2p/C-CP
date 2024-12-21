#include<bits/stdc++.h>
using namespace std;

//Defining tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//Tree traversal Using BFS

int main()
{
    //Constructing a tree
    Node* root=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    root->left=a;
    root->right=b;
    Node* c=new Node(4);
    Node* d=new Node(5);
    a->left=c;
    a->right=d;
    return 0;
}