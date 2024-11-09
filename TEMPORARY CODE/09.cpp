#include <bits/stdc++.h>
using namespace std;

// stack using array
class myStack
{
    int top;
    vector<int> arr;
    int size;

public:
    myStack(int size)
    {
        this->size = size;
        top = -1;
        arr.resize(this->size);
    }

    void push(int num)
    {
        // check full
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = num;
    }

    int pop()
    {
        // check empty
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int ele = arr[top];
        top--;
        return ele;
    }

    int peek()
    {
        // check empty
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    int len()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class myStackLL
{
    Node *top;
    int size;

public:
    myStackLL()
    {
        this->top = NULL;
        this->size = 0;
    }

    void push(int num){
        Node* temp=new Node(num);
        temp->next=top;
        top=temp;
        size++;
    }

    bool isEmpty(){
        return top == NULL;
    }

    int pop(){
        //check empty
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        Node* temp=top;
        int ele=temp->data;
        top=top->next;
        delete temp;
        size--;
        return ele;
    }
    int peek(){
        //check empty
        if(top==NULL){
            cout<<"Empty"<<endl;
            return -1;
        }
        return top->data;
    }
    int len(){
        return size;
    }
};

//stack using queue
class myStackUsingQueue{
    queue<int> q;
    public:
    myStackUsingQueue(){
        
    }
    void push(int num){
        q.push(num);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop(){
        //check empty
        if(q.empty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int ele=q.front();
        q.pop();
        return ele;
    }

    int peek(){
        //check empty
        if(q.empty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return q.front();
    }
    bool isEmpty(){
        return q.size()==0;
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
    myQueue(size){
        this.size=size;
        this->currSize=0;
        this->start=-1;
        this->end=-1;
        arr.resize(this->size);
    }

    void push(int num){
        //checkFull
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
        if(currSize==0){
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
            cout<<"Empty"<<endl;
            return -1;
        }
        return arr[start];
    }

    int len(){
        return currSize;
    }
};

//Queue implementation using linkedList
class myQueueLL{
    Node* start;
    Node* end;
    int size;
    public:
    myQueueLL(){
        this->size=0;
        this->end=NULL;
        this->start=NULL;
    }

    void push(int num){
        Node* temp=new Node(num);
        if(start==NULL){
            start=end=temp;
        }else{
            end->next=temp;
            end=temp;
        }
        size++;
    }

    int pop(){
        if(start==NULL) return;
        int ele=start->data;
        Node* temp=start;
        start=start->next;
        delete temp;
        size--;
        if(start==NULL){
            end=NULL;
        }
        return ele;
    }

    int top(){
        if(size ==0 ){
            return -1;
        }
        return start->data;
    }

    int len(){
        size;
    }
};

class myQueueUsingStack{
    stack<int> input;
    stack<int> output;
    int peekEle=-1;
    public:
    myQueueUsingStack(){

    }
    void push(int num){
        if(input.empty()){
            peekEle=num;
        }
        input.push(num);
    }

    int pop(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        int ele=output.top();
        output.pop();
        return ele;
    }

    int peek(){
        if(output.empty()){
            return peekEle;
        }
        return output.top();
    }
    bool isEmpty(){
        return input.size()==0 && output.size()==0;
    }
};

int main()
{
    cout<<"Hello"<<endl;
    return 0;
}