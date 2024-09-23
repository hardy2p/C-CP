#include <bits/stdc++.h>
using namespace std;

int minimumSum(vector<int> &nums)
{
    int ans = INT_MAX;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int a = nums[i];
        int b = 100;
        int c = 100;
        int curr = INT_MAX;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < a && nums[j] < b)
            {
                b = nums[j];
            }
        }

        for (int k = i + 1; k < n; k++)
        {
            if (nums[k] < a && nums[k] < c)
            {
                c = nums[k];
            }
        }

        if (b != 100 && c != 100)
        {
            curr = a + b + c;
        }

        //curr -1  ans  -1
        ans=min(curr,ans);
        
    }
    return ans;
}

int main()
{
    vector<int> nums={99999999,100000000,99999999};
    cout<<minimumSum(nums)<<endl;
    return 0;
}