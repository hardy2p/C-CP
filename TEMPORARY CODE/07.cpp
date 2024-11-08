#include <bits/stdc++.h>
using namespace std;

int func(int currXor, int maxK)
{
    int maxXor = 0;
    int k = 0;
    int ans = 0;
    while (k <= maxK)
    {
        int curr = currXor ^ k;
        if (curr > maxXor)
        {
            maxXor = curr;
            ans = k;
        }
        k++;
    }
    return ans;
}
vector<int> getMaximumXor(vector<int> &nums, int maxBit)
{
    vector<int> ans;
    int maxK = (1 << maxBit) - 1;
    int n = nums.size();
    int currXor = 0;
    for (auto num : nums)
    {
        currXor = currXor ^ num;
    }

    for (int i = 0; i < n; i++)
    {
        int bestK = func(currXor, maxK);
        ans.push_back(bestK);
        currXor = currXor ^ nums[n - i - 1];
    }
    return ans;
}
int main()
{
    vector<int> nums = {0, 1, 1, 3};
    vector<int> ans;
    int n = nums.size();
    int maxK = 3;
    for (int i = 0; i < n; i++)
    {
        int currXor = 0;
        for (int j = 0; j < n - i; j++)
        {
            currXor = currXor ^ nums[j];
            int bestK = func(currXor, maxK);
            ans.push_back(bestK);
        }
    }
    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}