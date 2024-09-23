#include<bits/stdc++.h>
using namespace std;
//Brute force
int solve(int n){
    int ans=0;
    while(n)
    {
        if(n&1>0) ans++;
        n>>=1;
    }
    return ans;
}

//Brian Kernighan’s Algorithm
int func(int n){
    int ans=0;
    while(n){
        n=n&(n-1);
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"No of setBits in "<<n<<" is "<<solve(n)<<endl;
    cout<<"No of setBits in "<<n<<" is "<<func(n)<<endl;
    return 0;
}