#include<bits/stdc++.h>
using namespace std;
//
void onePlaceRotateLeft(vector<int> &nums){
   int n=nums.size();
   int temp=nums[0];
   for(int i=1;i<n;i++){
    nums[i-1]=nums[i];
   }
   nums[n-1]=temp;
}





void func(vector<int>& nums,int s ,int e){
    while(s<e){
        swap(nums[s++],nums[e--]);
    }
}

void bestMethod(vector<int> &nums,int k){
    int n=nums.size();
    func(nums,0,n-k-1);
    func(nums,n-k,n-1);
    func(nums,0,n-1);
}



int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    //onePlaceRotateLeft(nums);
    for(auto num:nums) cout<<num<<" ";
    cout<<endl;
    vector<int> arr={1,2,3,4,5,6,7};
    bestMethod(arr,1);
    for(auto num:arr) cout<<num<<" ";
    cout<<endl;

    return 0;
}