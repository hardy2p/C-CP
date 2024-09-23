#include<iostream>
using namespace std;


bool binarySearch(int* arr, int s , int e, int k){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return true;
    }else if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
}

 
int main()
{
    int arr[5]={4,5,8,10,15};
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    int s=0;
    int e=4;
    binarySearch(arr,s,e,k)?cout<<"Yes":cout<<"No";
    return 0;
}