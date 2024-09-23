#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool containDuplicate(vector<int> nums,int k )
{
    //can be done with brute force using the O(n^2) time complexity
    unordered_map<int ,int> map;
    for(int i=0;i<nums.size();i++)
    {
        //Check weather that element is already in the map
        if(map.count(nums[i]))
        {
            if(abs(i-map[nums[i]])<=k)
            {
                return true;
            }
        }

        map[nums[i]]=i;
    }
    return false;
}

int main()
{
    vector<int> nums={1,0,1,1};
    
    return 0;
}