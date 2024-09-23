#include<bits/stdc++.h>
using namespace std;

void func(int n,int cnt)
{
    if(cnt==n) return;
    cnt++;
    cout<<cnt<<" ";
    func(n,cnt);
}

void func1(string str,int cnt){
    if(cnt == 5) return; //base case
    cout<<str<<endl;//All other operations
    cnt++;
    func1(str,cnt);//recursive call
}

void func2(int n)
{
    if(n<1) return;
    func2(n-1);
    cout<<n<<endl;
}

void sum(int n,int ans)
{
    if(n<1){
        cout<<ans<<endl;
        return;
    }
    ans=ans+n;
    sum(n-1,ans);
}

int sumFunctional(int n)
{
    if(n==0) return 0;
    return n+sumFunctional(n-1);
}

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}


void revArray(vector<int> &nums,int s,int e)
{
    if(s>e) return;
    swap(nums[s++],nums[e--]);
    revArray(nums,s,e);
}

// bool checkPalli(string str,int i,int n){
//     if(i>=n/2) return true;
//     //check for i and n-i-1
//     if(str[i] != str[n-i-1]) return false;
//     checkPalli(str,i+1,n);
// }

int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    // int n;
    // cout<<"Enter n to which you want to print upto\n";
    // cin>>n;

    // func(n,0);   
    //func1("Hello",0);
    //func2(n);
    //sum(n,0);
    //cout<<sumFunctional(n);
    //cout<<fact(n)<<endl;

    // vector<int> nums={1,2,3,4,5};
    // revArray(nums,0,nums.size()-1);
    // for(int num:nums) cout<<num<<" ";

    // string str="abcba5";
    // if(checkPalli(str,0,5)){
    //     cout<<"womp";
    // }else{
    //     cout<<"din";
    // }
    cout<<fib(4);
    return 0;
}