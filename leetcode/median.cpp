#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

double median(vector<int>& arr,int n)
{
    double ans=0;
    if(n%2==0){
        int index1=n/2;
        int index2=index1-1;
        ans=(arr[index1]+arr[index2])/2;
    }else{
        int index=n/2;
        ans=arr[index];
    }
    return ans;
}
int main()
{
    vector<int> nums1={1,2};
    vector<int> nums2={3,4};
    int n=nums1.size();
    int m=nums2.size();

    int tail1=n-1;
    int tail2=m-1;

    vector<int> ans(n+m,-1);

    //Now in will store the values in it

    int last=m+n-1;
    while(tail1>=0 && tail2>=0)
    {
        ans[last--]=nums1[tail1]>nums2[tail2]?nums1[tail1--]:nums2[tail2--];
    }
    while(tail1>=0)
    {
        ans[last--]=nums1[tail1--];
    }

    while(tail2>=0)
    {
       ans[last--]=nums2[tail2--];
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<"Median of the array is "<<median(ans,m+n);
    
    return 0;
}