#include<bits/stdc++.h>
using namespace std;
int bubbleSortAsc(vector<int>& nums){
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                ++ans;
            }
        }
    }
    return ans;
}

int bubbleSortDesc(vector<int>& nums){
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]<nums[j+1]){
                swap(nums[j],nums[j+1]);
                ++ans;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> asc = nums;
    int ascSwaps = bubbleSortAsc(asc);
    
    // Calculate number of swaps required to sort in descending order
    vector<int> desc = nums;
    int descSwaps = bubbleSortDesc(desc);
    
    // Output the minimum number of swaps required
    cout << min(ascSwaps, descSwaps) << endl;
    return 0;
}