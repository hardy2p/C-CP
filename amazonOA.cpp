#include<bits/stdc++.h>
using namespace std;

int func1(string str){
    int ans=0;
    string revStr=str;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i]==revStr[i]) ans++;
    }
    return ans;
}

int func2(vector<int>& nums){
    // int prod=INT_MIN;
    // int ans=0;
    // int n=nums.size();
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         int curr=nums[i]*nums[j];
    //         if(curr>prod){
    //             prod=curr;
    //             ans=nums[i]+nums[j];
    //         }
    //     }
    // 
    // return ans;

    //Method 2
    // sort(nums.begin(),nums.end());
    // return nums[nums.size()-1]+nums[nums.size()-2];

    //Method 3
    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int num:nums){
        if(num>max1){
            max2=max1;
            max1=num;
        }else if(num>max2){
            max2=num;
        }
    }
    return max1+max2;
}

int func3(vector<int> nums1,vector<int> nums2){
    int ans=0;
    unordered_map<int,int> mp1(nums1.begin(),nums1.end());
    unordered_map<int,int> mp2(nums2.begin(),nums2.end());
    
}
int main()
{
    // cout<<func1("abbba")<<endl;
    // cout<<func1("ascac");
    // vector<int> nums={9,-3,8,-6,-7,8,10};
    // cout<<func2(nums);
    return 0;
}