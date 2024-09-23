#include<iostream>
using namespace std;

int binarySearch(int* arr,int n,int target)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target)
        {
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int binaryRec(int* arr,int low,int high,int target)
{
    //base case
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;
    if(arr[mid]==target)
    {
        return mid;
    }else if(arr[mid]>target){
        return binaryRec(arr,low,mid-1,target);
    }else{
        return binaryRec(arr,mid+1,high,target);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int ans=binarySearch(arr,n,4);
    cout<<"INdex"<<" "<<ans;

    int ans1=binaryRec(arr,0,n-1,4);
    cout<<"ans "<<ans1;
    return 0;
}