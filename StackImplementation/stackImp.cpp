#include<bits/stdc++.h>
using namespace std;

class myStack{
    vector<int> arr;
    int top;
    int size;
    public:
    //constructor
    myStack(int k){
        this->size=k;
        arr=vector<int>(size,0);
        top = -1;
    }
    //push
    bool push(int val){
        if(isFull()){
            cout<<"Stack is full"<<endl;
            return false;
        }else{
            top++;
            arr[top]=val;
            return true;
        }
    }

    //pop

     pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return false;
        }else{
            top--;
            return true;
        }
    }

    //isFull
    bool ifFull
    {
        return top == size-1;
    }

    int peek()
    {
        if(isEmpty()) {
            cout<<"Stack is empty";
            return -1;
        }else{
            return arr[top];
        }
    }

    int isEmpty(){
        return top == -1;
    }
};

int main()
{

    return 0;
}