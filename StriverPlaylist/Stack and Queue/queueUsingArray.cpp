#include <bits/stdc++.h>
using namespace std;
class myQueue
{
    vector<int> arr;
    int front;
    int currSize;
    int back;
    int size;

public:
    myQueue(int n)
    {
        this->size = n;
        arr.resize(size);
        front = -1;
        back = -1;
        currSize=0;
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
    return 0;
}