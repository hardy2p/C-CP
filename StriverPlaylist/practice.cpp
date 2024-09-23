#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}
// Sinking sort or bubble sort
// Keep window of size 2 and keep sliding it untill it reaches the end

void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

void insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void printSubarray(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << nums[k] << " ";
            }
            cout << endl;
        }
    }
}

int solve(vector<int> nums, int k)
{
    int n = nums.size();
    map<int, int> mp;
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            ans = max(ans, i + 1);
        }

        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            ans = max(ans, len);
        }

        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return ans;
}

int main()
{
    // vector<int> nums={5,8,2,7,6,1,7,2};
    // selectionSort(nums);
    // bubbleSort(nums);
    // insertionSort(nums);
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    printSubarray(nums);
    for (auto num : nums)
        cout << num << " ";

    return 0;
}