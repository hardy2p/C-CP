#include<iostream>
#include<stack>
using namespace std;

// class stack{
//     public:
//     int *arr;
//     int size;
//     int top;

//     stack(int s)
//     {
//         this->size=s;
//         this->top=-1;
//         arr=new int[s];
//     }

//     void push(int data)
//     {
//         //check if full
//         if(top>=size)
//         {
//             cout<<"Stack overflow"<<endl;
//             return;
//         }else{
//             top++;
//             arr[top]=data;
//         }
//     }
int main()
{
    stack<char> s;
    //main string
    string str="Pushpendra";
    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }

    string ans="";
    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }

    //reversed string
    cout<<ans<<endl;
    return 0;
}