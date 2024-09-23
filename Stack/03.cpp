#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtStart(Node* &head,int data)
{
    Node* newNode= new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &tail,int data)
{
    Node* newNode= new Node(data);
    tail->next=newNode;
    tail=newNode;
}



int main()
{
    Node* n= new Node(5);
    cout<<n->data<<endl;
    
    return 0;
}