#include<bits/stdc++.h>
using namespace std;

int singleNo(vector<int> nums){
    int ans=0;
    for(auto num: nums) ans= ans ^ num;
    return ans;
}

int singleNo2(vector<int> nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i=i+3){
        if(nums[i] != nums[i-1]){
            return nums[i-1];
        }
    }
    return nums[n-1];
}

int main()
{
    
    vector<int> nums={4,4,4,1,2,2,2};
    cout<<singleNo2(nums)<<endl;
    return 0;
}