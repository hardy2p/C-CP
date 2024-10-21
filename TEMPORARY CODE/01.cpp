#include <bits/stdc++.h>
using namespace std;

// integer to binary conversion
string func(int n)
{
    string ans = "";
    while (n != 1)
    {
        ans = ans + to_string(n % 2);
        n = n / 2;
    }
    ans='1'+ans;
    return ans;
}
//binary to int conversion
int func1(string str){
    int ans=0;
    int power=0;
    int n=str.size();
    for(int i=n-1;i>=0;i--){
        int c=str[i]-'0';
        ans=ans+c*(pow(2,power));
        power++;
    }
    return ans;
}

//set kth(0 indexed) bit from back to 1
int setBit(int n ,int k){
    return n | (1<<k);
}

int clearBit(int n,int k)
{
    return n & (~(1<<k));
}

int toggleBit(int n, int k){
    return n^(1<<k);
}

int removeBit(int n){
    return n&(n-1);
}

bool powOf2(int n){
    // int start=2;
    // while(start<=n){
    //     if(n==start) return true;
    //     start=start*2;
    // }
    // return false;
    return (n&(n-1)) == 0;
}

int cntSetBit(int n){
    int ans=0;
    while(n != 0){
        if(n & 1) ans++;
        n=n>>1;
    }
    return ans;
}
int main()
{
    // cout << func(8)<<endl;
    // cout << func(7)<<endl;
    // cout << func(15)<<endl;
    // cout << func(14)<<endl;
    //cout<<func1("111")<<endl;
    //cout<<setBit(5,1);
    //cout<<clearBit(7,1);
    //cout<<toggleBit(5,1);
    //cout<<removeBit(7);
    //cout<<powOf2(128);
    cout<<cntSetBit(15);
    return 0;
}