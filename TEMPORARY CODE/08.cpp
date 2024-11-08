#include<bits/stdc++.h>
using namespace std;

//stack using a array
class myStack{
    int top;
    vector<int> arr;
    int size;
    public:
    myStack(int size){
        top = -1;
        this->size=size;
        arr.resize(size,0);
    }
    //push, pop, peek ,isEmpty , isFull and len
    void push(int num){
        if(top==size-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=num;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;//Indicates stack is empty
        }
        int ele=arr[top];
        top--;
        return ele;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top == size-1;
    }
    int len(){
        return top+1;
    }
};

//queue using array
class myQueue{
    int start;
    int end;
    int size;
    int currSize;
    vector<int> arr;
    public:
    myQueue(int size){
        this->size=size;
        this->start=-1;
        this->end=-1;
        this->currSize=0;
        arr.resize(this->size);
    }

    //push from end 
    void push(int num){
        if(currSize==size){
            cout<<"Full"<<endl;
            return;
        }
        if(currSize==0){
            start=end=0;
        }else{
            end=(end+1)%size;
        }
        arr[end]=num;
        currSize++;
    }

    int pop(){
        if(currSize==0)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        int ele=arr[start];
        if(currSize==1){
            start=end=-1;
        }else{
            start=(start+1)%size;    
        }
        currSize--;
        return ele;
    }

    int top(){
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[start];
    }
    int len(){
        return currSize;
    }
};

//Using linkedList now
class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}

class myStackLL{
    Node* top;
    int size;
    public:
    myStackLL(){
        this->top=NULL;
        size=0;
    }
    void push(int num){
        Node* temp=new Node(num);
        temp->next=top;
        top=temp;
        size++;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack empty"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
        size--;
    }

    bool isEmpty(){
        return top == NULL;
    }

    int peek(){
        if(top == NULL){
            cout<<"Empty"<<endl;
            return -1;
        }
        return top->data;
    }
};

class myQueueLL{
    Node* start;
    Node* end;
    int size;
    myQueueLL(){
        this->size=0;
        this->start=NULL;
        this->end=NULL;
    }
    //push pop top isEmpty len 
    void push(int num){
        Node* temp=new Node(num);
        if(start==NULL){
            start=temp;
            end=temp;
        }else{
            end->next=temp;
            end=temp;
        }
        size++;
    }

    void pop(){
        if(start==NULL) return;
        Node* temp=start;
        start=start->next;
        delete temp;
        size--;
        if(start == NULL){
            end = NULL;
        }
    }

    int top(){
        if(size==0) return -1;
        return start->data;
    }
    bool isEmpty(){
        return size==0;
    }
    int len(){
        return size;
    }
};
int main()
{
    cout<<"Stack using arrays"<<endl;
    return 0;
}