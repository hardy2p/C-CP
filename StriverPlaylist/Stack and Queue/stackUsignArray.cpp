#include <bits/stdc++.h>
using namespace std;

class myStack
{
    vector<int> arr;
    int top;
    int size;

public:
    myStack(int n)
    {
        this->size = n;
        arr.resize(this->size);
        this->top = -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int data)
    {
        if (top == size-1)
        {
            cout << "Stack is Full" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    int len(){
        return top+1;
    }
};



int main()
{
    myStack st(10);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.len()<<endl;
    return 0;
}