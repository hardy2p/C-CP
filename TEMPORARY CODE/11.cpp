#include <bits/stdc++.h>
using namespace std;
// Linked List defination
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
// Stack using array
class myStack
{
    int top;
    vector<int> arr;
    int size;

public:
    myStack(int size)
    {
        this->size = size;
        arr.resize(size);
        top = -1;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop()
    {
        if(top == -1){
            return -1;
        }
        int ele=arr[top];
        top--;
        return ele;
    }

    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }
};


class myQueue{
    int size;
    int currSize;
    vector<int> arr;
    int start;
    int end;
public:
    myQueue(int size){
        this->size=size;
        arr.resize(size);
        currSize=0;
        start=0;
        end=0;
    }

    void push(int data){
        //check full
        if(currSize==size){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[end]=data;
        end=(end+1)%size;
        currSize++;
    }

    int pop(){
        //check empty
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ele=arr[start];
        start=(start+1)%size;
        currSize--;
        return ele;
    }

    int peek(){
        //check empty
        if(currSize==0){
            return -1;
        }
        return arr[start];
    }

    bool isEmpty(){
        return currSize==0;
    }
};


class stackUsingLL{
    Node* top;
    int currSize;
    public:
    stackUsingLL(){
        top=NULL;
        currSize=0;
    }
    void push(int data){
        Node* temp= new Node(data);
        temp->next=top;
        top=temp;
        currSize++;
    }

    int pop(){
        //check empty
        if(top == NULL){
            return -1;
        }
        int ele = top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        currSize--;
        return ele;
    }
};

class queueUsingLL{
    Node* start;
    Node* end;
    int currSize;
    public:
    queueUsingLL(){
        start=NULL;
        end=NULL;
        currSize=0;
    }

    void push(int data){
        Node* temp= new Node(data);
        if(end==NULL){
            start=temp;
            end=temp;
        }else{
            end->next=temp;
            end=temp;
        }
        currSize++;
    }

    int pop(){
        if(start==NULL){
            return -1;
        }
        Node* temp=start;
        start=start->next;
        int ele=temp->data;
        delete temp;
        currSize--;

        if(start==NULL){
            end=NULL;
        }
        return ele;
    }
};

class stackUsingQueue{
    queue<int> q;
    public:
    stackUsingQueue(){
        //constructor to instalize the objects
    }
    void push(int data){
        q.push(data);
        int n=q.size();
        for(int i=1;i<n;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop(){
        if(q.empty()){
            return -1;
        }
        int ele=q.front();
        q.pop();
        return ele;
    }
};

class queueUsingStack{
    stack<int> s1;
    
}
int main()
{
    cout << "Hello" << endl;
    return 0;
}