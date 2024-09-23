#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int temp=nums[i];
        int minIndex=i;
        for (int j = i + 1; j < n; j++)
        {
            if(nums[j]<temp){
                minIndex=j;
            }
        }
        swap(nums[i],nums[minIndex]);
    }
}

void func(vector<int> &nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
        }
    }
}

void insertionSort(vector<int> &nums){
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j],nums[j-1]);
            j--;
        }
    }
}
int main()
{
    vector<int> nums = {4, 3, 2, 1};
    insertionSort(nums);
    for (auto num : nums)
        cout << num << endl;
    return 0;
}