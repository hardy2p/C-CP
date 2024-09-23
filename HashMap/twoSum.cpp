#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> func(vector<int> nums,int target)
{
    unordered_map<int,int> map;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        map[nums[i]]=i;
    }

    for(int i=0;i<n;i++)
    {
        int left=target-nums[i];
        //Check if that left key is present in the map already and not the same it oo
        if(map.count(left) && map[left] != i)
        {
            return {i,map[left]};
        }
    }
    return {};
}

int main()
{
    vector<int> nums={2,7,11,15};
    vector<int> ans=func(nums,9);
    if(ans.size()==0) cout<<"EMPTY";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}