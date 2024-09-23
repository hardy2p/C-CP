#include<iostream>
using namespace std;

int pivot(int* nums,int n){
    int s=0;
    int e=n-1;
    
    
    while (s<e)
    {
        int mid=(s+e)/2;

        if(nums[mid]>nums[e])
        {
            s=mid+1;
        }else{
            e=mid;
        }
    }
    
    return s;
    
}

int main()
{
    int nums[]={1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<pivot(nums,n);
    return 0;
}