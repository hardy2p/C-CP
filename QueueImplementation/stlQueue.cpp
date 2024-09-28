#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    //Push in queue;
    cout<<"Enter no of elements to push in queue\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element\n";
        int num;
        cin>>num;
        q.push(num);
    }

    cout<<"Last element pushed in the queue was "<<q.back()<<endl;

    cout<<"Elements of queue are "<<endl;
    while(q.size()!=0){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}