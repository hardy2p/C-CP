#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,4};
    int n =nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         cout<<nums[j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<int> arr;
    for(int i=0;i<4;i++)
    {
        arr.push_back(i);
    }
    for(auto i:arr) cout<<i<<endl;
    return 0;
}