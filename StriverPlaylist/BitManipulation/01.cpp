#include <bits/stdc++.h>
using namespace std;

string convertToBinary(int x)
{
    string ans = "";
    while (x != 0)
    {
        if(x%2 == 1){
            ans+='1';
        }else{
            ans+='0';
        }
        x=x/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int convertToDecimal(string ans){
    int n=ans.size();
    int num=0;
    int p2=1;
    for(int i=n-1;i>=0;i--){
        if(ans[i]=='1'){
            num+=p2;
        }
        p2=p2*2;
    }
    return num;
}

//This fucntion sets kth bit to 1(from back)
int setBit(int n,int k){
    int temp=1;
    temp=temp<<k;
    temp=temp|n;
    return temp;
}

int clearBit(int n, int k){
    int temp=1;
    temp=temp<<k;
    temp= ~temp;
    temp=temp&n;
    return temp;
}

int toggleBit(int n , int i){
    int temp=1;
    temp=temp<<i;
    temp=temp^n;
    return temp;
}


int removeLastSetBit(int n){
    return (n)&(n-1);
}

bool isPowerof2(int n){
    //if no of set bit is 1 it is power of two
    if(n & (n-1) == 0){
        return true;
    }else{
        return false;
    }
}

int countSetBitBrute(int n){
    int cnt=0;
    while(n != 0){
        if(n%2==1) cnt++;
        n=n/2;
    }
    return cnt;
}

int countSetBits1(int n){
    int cnt =0;
    while(n != 0){
        if(n&1) cnt++;
        n=n>>1;
    }
    return cnt;
}

int countSetBitsOptimized(int n){
    int cnt=0;
    while(n !=0){
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}


int main()
{
    cout<<convertToBinary(5)<<endl;
    cout<<convertToDecimal("101")<<endl;
    cout<<setBit(9,2)<<endl;
    cout<<clearBit(13,2)<<endl;
    cout<<toggleBit(13,2)<<endl;
    cout<<removeLastSetBit(13)<<endl;
    cout<<isPowerof2(15)<<endl;
    cout<<countSetBitBrute(13)<<endl;
    cout<<countSetBits1(13)<<endl;
    cout<<countSetBitsOptimized(13)<<endl;
    return 0;
}