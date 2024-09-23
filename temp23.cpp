#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,4,5,6};
    vector<int> ans(nums.begin()+2,nums.end());
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}