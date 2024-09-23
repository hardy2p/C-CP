#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(45);//variable must be same as decalration type variable
    s.push(40);
    s.push(35);
    s.push(30);
    s.push(25);

    s.pop();//last element that will be inserted will be removed
    

    //output
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}