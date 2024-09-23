#include<bits/stdc++.h>
using namespace std;

void func(int ind,vector<int> nums,int arr[],int n)
{
    //Base condition
    if(ind>=n)
    {
        for(auto i:nums) cout<<i<<" ";
        cout<<endl;
        return;
    }

    //Pick
    nums.push_back(arr[ind]);
    func(ind+1,nums,arr,n);
    //Not pick
    nums.pop_back();
    func(ind+1,nums,arr,n);
}
int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int> nums;
    func(0,nums,arr,n);
    return 0;
}