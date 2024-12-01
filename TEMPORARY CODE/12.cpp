#include<bits/stdc++.h>
using namespace std;

//Move hashes to front
string func(string str){
    string ans="";
    int n=str.size();
    int hashCnt=0;
    for(int i=0;i<n;i++){
        if(str[i]=='#') hashCnt++;
    }

    for(int i=0;i<hashCnt;i++){
        ans+='#';
    }
    for(int i=0;i<n;i++){
        if(str[i]=='#') continue;
        ans+=str[i];
    }
    return ans;
}

//reduce the size of the string
string func1(string str){
    //str will be like :- aaabbccc
    //we have to return a3b2c3

    int n=str.size();
    string ans="";
    int cnt =1;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            cnt++;
        }else{
            ans=ans+str[i-1];
            ans=ans+to_string(cnt);
            cnt =1;
        }
    }
    ans=ans+str[n-1];
    ans+=to_string(cnt);
    return ans;
}

//Stack using an  queue 
//queue using stack
//Gonna use two stack one inout one pit

class myQueue{
    stack<int> input;
    stack<int> output;
    public:
    myQueue(){
        //Default constructor
    }

    void push(int num){
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
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
}
int main()
{
    cout<<func("#move#to#start")<<endl;
    return 0;
}