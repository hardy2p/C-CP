#include<iostream>
#include<vector>
using namespace std;
int first(int* nums,int k,int n)
{
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==k)
        {
            ans=mid;
            high=mid-1;
        }else if(nums[mid]>k)
        {
            high=mid+1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int last(int* nums ,int k,int n)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==k)
        {
            ans=mid;
            low=mid+1;
        }else if(nums[mid]>k)
        {
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={2,4,6,8,8,8,11,13};
    cout<<first(arr,8,8)<<endl;
    cout<<last(arr,8,8)<<endl;
    return 0;
}


/*
class Solution {
public:
    int pivot(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int binary(vector<int>& nums, int s, int e, int k) {
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] > k) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int k) {
        int p = pivot(nums);
        int n = nums.size();

        int result;
        if (k >= nums[0] && k <= nums[p - 1]) {
            result = binary(nums, 0, p - 1, k);
        } else {
            result = binary(nums, p, n - 1, k);
        }

        return result;
    }
};

*/