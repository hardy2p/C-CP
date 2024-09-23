#include<iostream>
using namespace std;

bool isSorted(int* arr,int n ){
    if(n==0 || n==1){
        return true;
    }
    bool ans = false;
    if(arr[0]>arr[1]){
        return false;
    }else{
         ans = isSorted(arr+1,n-1);
    }
    return ans ;
}

int main()
{
    int arr[5]={4,8,9,15,20};
    bool ans=isSorted(arr,5);
    ans?cout<<"Yes"<<endl:cout<<"NO"<<endl;
    return 0;
}