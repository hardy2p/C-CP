#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
    //Multi Constructor
    Node(int val){
        this->data=val;
        this->next=NULL;
    }

    Node(int val,Node* nextNode){
        this->data=val;
        this->next=nextNode;
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


void deleteNode(int pos,Node* &head){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    int cnt=1;
    Node* curr=head;
    Node* prev=NULL;
    while(cnt < pos)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    delete curr;
}

void deleteDirectNode(Node* node){
    Node* temp=node->next;
    node->val=temp->val;
    node->next=temp->next;
    delete temp;
}


int main()
{
    
    return 0;
}