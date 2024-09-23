#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> nums,int k)
{
    int s=0;
    int e=nums.size()-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==k){
            return mid;
        }else if(nums[mid]>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums={1,2,3,5,8,9};
    int k=5;
    int index=binarySearch(nums,k);
    cout<<index<<endl;
    return 0;
}