#include<bits/stdc++.h>
using namespace std;


//stack using arrays:-
class myStack{
    int top;
    vector<int> arr;
    int size;
    public:
    myStack(int size){
        this->size=size;
        top=-1;
        arr.resize(this->size);
    }

    //push at top:-
    void push(int ele){
        if(top== size-1){
            cout<<"Stack is full"<<endl;
            return;
        }

        top++;
        arr[top]=ele;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        //check empty
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }
};


//queue using array:-
class myQueue {
    vector<int> arr;
    int currSize;
    int start;
    int end;
    int size;

public:
    // Constructor
    myQueue(int size) {
        this->size = size;
        this->currSize = 0;
        this->start = 0;
        this->end = 0;
        arr.resize(this->size);
    }

    // Push an element into the queue
    void push(int ele) {
        if (currSize == size) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[end] = ele;
        end = (end + 1) % size;
        currSize++;
    }

    // Pop an element from the queue
    int pop() {
        if (currSize == 0) {
            cout << "Queue is empty" << endl;
            return INT_MIN; // Return a sentinel value
        }
        int ele = arr[start];
        start = (start + 1) % size;
        currSize--;
        return ele;
    }

    // Get the front element
    int top() {
        if (currSize == 0) {
            cout << "Queue is empty" << endl;
            return INT_MIN; // Return a sentinel value
        }
        return arr[start];
    }

    // Get the current size of the queue
    int len() {
        return currSize;
    }
};

//Defining linkedList for upcoming liknekedlist implementation
class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//stack using linkedList
//we do not need to define size in linked list thats why we are fine and make it more dynamoic than ever 

class stackusingLL{
    Node* top;
    int currSize;

    public:

    stackusingLL(){
        this->top=NULL;
        this->currSize=0;
    }

    void push(int ele){
        Node* temp=new Node(ele);
        temp->next=top;
        top=temp;
        currSize++;
    }

    void pop(){
        //check empty
        if(top==NULL) return;
        Node* temp=top;
        top=top->next;
        delete temp;
        currSize--;
    }

    int peek(){
        if(top== NULL){
            return -1;
        }
        return top->data;
    }
};

class queueUsingLL{
    Node*
};
int main()
{
    
    return 0;
}