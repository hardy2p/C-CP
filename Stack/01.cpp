#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(98);
    s.push(97);
    s.push(4);
    s.push(7);
    s.push(8);

    s.pop();
    s.pop();

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    s.empty() ? cout<<"S is empty"<<endl : cout<<"S is not empty"<<endl;

    cout<<"Size of the stack is "<< s.size()<<endl;
    return 0;
}