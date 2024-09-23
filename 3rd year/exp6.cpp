#include <iostream>
#include <vector>

using namespace std;

// Function to check if there exists a subset with a given sum
bool subsetSumDP(vector<int>& nums, int targetSum) {
    int n = nums.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));

    // Initialization
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Dynamic programming to fill the dp array
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= targetSum; ++j) {
            if (j < nums[i - 1]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    return dp[n][targetSum];
}

int main() {
    int n;
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the set: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    bool result = subsetSumDP(nums, targetSum);

    if (result) {
        cout << "Yes, there exists a subset that sums up to the target sum." << endl;
    } else {
        cout << "No, there is no subset that sums up to the target sum." << endl;
    }

    return 0;
}