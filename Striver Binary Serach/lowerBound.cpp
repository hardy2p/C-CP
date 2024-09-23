#include<iostream>
using namespace std;
int lBound(int* arr,int n,int x){
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<lBound(arr,10,4);
    return 0;
}