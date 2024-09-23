#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int* arr;

    Stack(int size){
        this->size=size;
        top = -1;
        arr= new int[size];
    }

    void push(int data)
    {
        //check if stack is full
        if(top>=size)
        {
            cout<<"Stack is full "<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }

    int peek()
    {
        //Check if stack is empty
        if(top<0)
        {
            cout<<"Stack is empty";
            return -1;
        }

        return arr[top];
    }

    void pop()
    {
        //check empty
        if(top<0)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }

};

int main()
{
    Stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);
    
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    
    return 0;
}