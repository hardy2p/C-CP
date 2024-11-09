#include<bits/stdc++.h>
using namespace std;

class myQueue{
    stack<int> input;
    stack<int> output;
    public:
    myQueue(){

    }
    void push(int num){
        input.push(num);
    }

    int pop(){
        if(output.empty())
        {
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
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool isEmpty(){
        return output.empty() && input.empty();
    }
};

int main()
{
    
    return 0;
}