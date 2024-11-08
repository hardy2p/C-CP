#include <bits/stdc++.h>
using namespace std;
class myQueue{
    int size;
    vector<int> arr;
    int currSize;
    int start;
    int end;
    public:
    myQueue(int size){
        this->size=size;
        arr.resize(this->size,0);
        this->start=-1;
        this->end=-1;
        this->currSize=0;
    }


    void push(int num){
        if(currSize== size){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(currSize==0){
            start=0;
            end=0;
        }else{
            end=(end+1)%size;
        }
        arr[end]=num;
        currSize++;
    }

    int pop(){
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ele=arr[start];
        if(currSize==1){
            start=-1;
            end=-1;
        }else{
            start=(start+1)%size;
        }
        currSize--;
        return ele;
    }

    int top(){
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[start];
    }
    int len(){
        return currSize;
    }

};
int main()
{
    // usign stl
    //  queue<int> q;
    //  for(int i=0;i<=8;i++){
    //      q.push(i);
    //  }
    //  cout<<q.front()<<endl;
    //  q.pop();
    //  cout<<q.front()<<endl;
    //  cout<<q.size()<<endl;
    //  cout<<q.empty()<<endl;
    //  cout<<q.back()<<endl;
    myQueue q(10);
    q.push(5);
    q.push(4);
    q.push(3);
    q.pop();
    q.push(2);
    q.push(1);
    while(q.len() != 0){
        cout<<q.top()<<endl;
        q.pop();
    }
    return 0;
}