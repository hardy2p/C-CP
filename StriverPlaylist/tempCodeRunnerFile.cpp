#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={10,8,7,9,5};
    sort(nums.end(),nums.begin());
    for(auto num:nums) cout<<num<<" ";
    return 0;
}