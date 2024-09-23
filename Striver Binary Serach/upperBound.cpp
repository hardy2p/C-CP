#include<iostream>
using namespace std;
int uBound(int* arr,int n ,int x)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]>x)
        {
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={2,3,6,7,8,8,11,11,11,12};
    int n=10;
    cout<<uBound(arr,n,6);
    return 0;
}