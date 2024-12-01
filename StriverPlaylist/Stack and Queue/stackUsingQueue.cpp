#include<bits/stdc++.h>
using namespace std;

class myStack{
    queue<int> q;
    public:
    void push(int num){
        q.push(num);
        int n=q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop(){
        int ele=q.front();
        q.pop();
        return ele;
    }

    int top(){
        return q.front();
    }

    bool isEmpty(){
        return q.size()==0;
    }
};

int main()
{
    
    return 0;
}