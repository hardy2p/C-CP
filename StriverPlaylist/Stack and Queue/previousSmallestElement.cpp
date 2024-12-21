#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> nums)
{
    int n = nums.size();
    vector<int> nge(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[i] <= st.top())
        {
            st.pop();
        }
        if (!st.empty())
        {
            nge[i] = st.top();
        }
        st.push(nums[i]);
    }
    return nge;
}

int main()
{
    vector<int> nums = {4, 5, 2, 10, 8};
    // ans will be -1,4,-1,2,2

    // Brute force

    // int n=nums.size();
    // vector<int> nge(n,-1);
    // for(int i=n-1;i>=0;i--){
    //     for(int j=i-1;j>=0;j--){
    //         if(nums[j]<nums[i]){
    //             nge[i]=nums[j];
    //             break;
    //         }
    //     }
    // }
    // for(int num:nge){
    //     cout<<num<<' ';
    // }

    // Optimal approach:-
    reverse(nums.begin(),nums.end());
    vector<int> ans=func(nums);
    reverse(ans.begin(),ans.end());
     for(int num:ans){
         cout<<num<<' ';
    }
    return 0;
}