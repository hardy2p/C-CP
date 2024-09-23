#include<iostream>
using namespace std;


int linearSearch(int *arr,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}


int binarySearch(int *arr,int n ,int k)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
        {
            return mid;
        }else if(arr[mid]>k)
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
    int arr[]={1,2,4,5,6};
    int n =sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,5)<<endl;
    cout<<binarySearch(arr,n,5)<<endl;
    return 0;
}