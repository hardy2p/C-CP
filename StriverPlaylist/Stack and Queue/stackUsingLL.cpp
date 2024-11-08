#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class myStack{
    Node* top;
    int size;
    public:
    myStack(){
        top=NULL;
        size=0;
    }

    void push(int num){
        Node* temp= new Node(num);
        temp->next=top;
        top=temp;
        size++;
    }

    void pop(){
        //check empty
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp= top;
        top=top->next;
        delete temp;
        size--;
    }

    int peek(){
        //check empty
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    int len(){
        return size;
    }

    bool isEmpty(){
        return top == NULL;
    }
};

int main()
{
    
    return 0;
}