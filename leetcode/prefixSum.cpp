#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> nums){
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

vector<int> prefix(vector<int> nums)
{
    vector<int> ans;
    ans[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        ans[i]=ans[i-1]+nums[i];
    }
    return ans;
}


int main()
{
    vector<int> nums={1,2,3,4,5};
    display(nums);
    vector<int> res=prefix(nums);
    display(res);
    return 0;
}