#include<iostream>
using namespace std;


class Node{
    public:
       int data;
       Node* next;

       Node(int val){
        this->data=val;
        this->next=NULL;
       }
};

void insertAtStart(Node* &head,int val)
{
    Node* temp= newNode(val);
    temp->next=head;
    head=temp;
}

int main()
{
    //Linked list
    Node* newNode= new Node(100);
    cout<<newNode->data<<endl;
    cout<<newNode->next<<endl;
    
    return 0;
}