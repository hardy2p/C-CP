#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }    
};

void addBack(Node* &head, int data){
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* curr=new Node(data);
    temp->next=curr;
}

void insertAtStart(Node* &head, int data){
    Node* curr=new Node(data);
    curr->next=head;
    head=curr;
}

void deleteAtStart(Node* &head){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

int main()
{
    Node* head=new Node(1);
    addBack(head,4);
    addBack(head,5);
    insertAtStart(head,0);
    insertAtStart(head,10);
    deleteAtStart(head);
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}