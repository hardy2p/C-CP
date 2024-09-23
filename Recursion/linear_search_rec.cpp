#include<iostream>
using namespace std;
linearSearch(int* arr ,int n ,int k)
{
    if(n==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }else{
        return linearSearch(arr+1,n-1,k);
    }
}
int main()
{
    int arr[5]={1,5,14,2,0};
    int k;
    cout<<"Enter the element you want to search for"<<endl;
    cin>>k;
    
    linearSearch(arr,5,k)?cout<<"Yes":cout<<"No";

    return 0;
}