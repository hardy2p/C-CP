#include <bits/stdc++.h>
using namespace std;

/*
Question 1:-
Return the no of operations to make all
elements in the array unique and distinct.
In one operation we can delete 3 elements from the starting of the array.
*/

int noOfOperations(vector<int> nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.count(nums[i]))
        {
            int noOfEle = i + 1;
            ans = ceil((double)noOfEle / 3.0);
            break;
        }
        else
        {
            mp[nums[i]]++;
        }
    }
    return ans;
}

/*
Question 2:-
Given Integer array nums and an integer k
Opeation is that you can add any no from [-k, k] to each element of array atmost once
return maximum possible distinct elements from the array
*/

// int maxDistinct(vector<int> nums, int k){
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
    
// }

int main()
{
    vector<int> nums={1,2,3,4,5,6,4};
    int ans=noOfOperations(nums);
    cout<<ans<<endl;
    return 0;
}