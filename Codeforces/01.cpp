#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    string ans = "";
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int favNo = nums[f - 1];
    sort(nums.rbegin(), nums.rend());
    int countFav = count(nums.begin(), nums.begin() + k, favNo);
    int totalFav = count(nums.begin(), nums.end(), favNo);

    if (countFav > 0 && countFav < totalFav)
    {
        cout << "MAYBE" << endl;
    }
    else if (countFav > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}