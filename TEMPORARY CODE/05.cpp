#include<bits/stdc++.h>
using namespace std;
ListNode{
    int val;
    ListNode* next;

    public:
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int gcd1(int m,int n){
    while(m!=n){
        if(m>n){
            m=m-n;
        }else{
            n=n-m;
        }
    }
    return m;
}

int countCell(int a ,int b,vector<vector<int>> route){
    vector<vector<int>> mp(a,vector<int>(b,0));

    for(auto vec:route){
        int row=vec[0]-1;
        int start=vec[1]-1;
        int end=vec[2]-1;
        
        for(int i=start;i<=end;i++){
            mp[row][i]=1;
        }
    }

    int cnt=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        {
            if(mp[i][j]==0) cnt++;
        }
    }
    return cnt;
}
bool func(vector<int> nums,int k){
    for(auto num:nums){
        if(num%k != 0){
            return false;
        }
    }
    return true;
}

int arrayGcd(vector<int> nums){
    int k=*min_element(nums.begin(),nums.end());
    while (k != 1){
        if(func(nums,k)){
            break;
        }
        k--;
    }
    return (k==1) ?  -1: k;    
}

int arrayGcdOptimized(vector<int> nums){
    int curr=gcd(nums[0],nums[1]);
    for(int i=2;i<nums.size();i++){
        curr=gcd(curr,nums[i]);
    }
    return curr;
}


bool isPossible(string a ,string b){
    set<char> s(a.begin(),a.end());
    for(auto c:b){
        if(s.count(c)) return true;
    }
    return false;
}

int reverseNumber(int n){
    int temp=n;
    int ans=0;
    while(temp != 0){
        ans=ans*10 +(temp%10);
        temp/=10;
    }
    return ans;
}

int main()
{
    // int a = 3, b = 3;
    // vector<vector<int>>routes = {{1, 2, 3}, {2, 1, 2}, {3, 1, 3}};
    // cout<<"No of cell empty "<<countCell(a,b,routes)<<endl;

    vector<int> arr = {12, 24, 36, 48};
    cout<<arrayGcdOptimized(arr)<<endl;
    return 0;
}