#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;
    public:

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }

    }
};

void insertAtEnd(Node* &head,int data){
    Node* temp=new Node(data);
    Node* ptr=head;
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}

void insertAtStarting(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

void insertAtPostion(int pos,int data,Node* &head){
    Node* temp=new Node(data);
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    Node * ptr= head;
    int cnt =1;
    while(ptr!= NULL && cnt < pos-1){
        ptr=ptr->next;
        cnt++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}

void deleteNode(Node* &head, int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt = 1;
        while(cnt <= pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev-next=curr->next;
        delete curr;
    }
}

int main()
{
    vector<int> nums={1,2,3,4,5};
    return 0;
}