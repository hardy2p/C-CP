#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node* next;

    Node(int d)
    {
        data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL";
    cout<<endl;
}

void insertAtHead(Node* &head , int d)
{
    Node* newNode= new Node(d);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* &tail,int d)
{
    Node* newNode= new Node(d);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

int main()
{
    Node* head= new Node(10);
    Node* tail= head;
    print(head);


    insertAtHead(head,45);
    print(head);

    insertAtHead(head,74);
    insertAtHead(head,78);

    print(head);

    insertAtTail(tail,99);
    print(head);

    return 0;
}