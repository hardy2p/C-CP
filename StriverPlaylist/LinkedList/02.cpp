#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;
    Node* prev;

    public:
    Node(){
        data=0;
        next=NULL;
        prev=NULL;
    }

    Node(int val){
        this->data=val;
        next=NULL;
        prev=NULL;
    }
};

Node* createDoubly(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* tail=head;
    for(int i=1;<arr.size();i++){
        Node* newNode=new Node(arr[i]);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    return head;
}

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void insertAtHead(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* &head,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}



//Where is the code to delete the node from the list 
int main()
{
    
    return 0;
}