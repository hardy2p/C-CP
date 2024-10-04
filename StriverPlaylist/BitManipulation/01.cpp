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


int main()
{
    cout<<convertToBinary(5)<<endl;
    cout<<convertToDecimal("101")<<endl;
    return 0;
}