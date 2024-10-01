#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
    //Constructor
    Node(int val){
        this->data=val;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free\n";
    }
};

void insertionAtStart(int val,Node* &head){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

void insertionAtEnd(int val,Node* &head)
{
    
    Node* temp=head;
    Node* newNode= new Node(val);
    if(head == NULL){
        head=newNode;
        return;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertionAtPos(int val,Node* &head,,int pos){
    Node* newNode=new Node(val);
    if(pos==1){
        newNode->next=head;
        head=newNode;
    }
    Node* temp=head;
    int cnt =1;
    while(cnt < pos -1 && temp->next != NULL){
        temp=temp->next;
        cnt++;
    }

    newNode->next=temp->next;
    temp->next=newNode;

}
int main()
{
    
    return 0;
}