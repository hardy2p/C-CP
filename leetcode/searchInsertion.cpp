#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Brute force TC O(n);
 int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=target)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }

//Convert it to O(logn)
//Basically it is a binary search type question
int insert(vector<int>& nums, int target){
    int n=nums.size();
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid=(s+e)/2;
        cout<<"Enterd the loop"<<endl;
       
        if(nums[mid]==target)
        {
            return mid;
        }else if(nums[mid]>target)
        {
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}


int main()
{
    vector<int> nums={1,3,5,6};
    int target=6;
   // cout<<searchInsert(nums,target)<<endl;
    cout<<insert(nums,target)<<endl;
    return 0;
}