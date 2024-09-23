#include<iostream>
using namespace std;

void reverse(int *arr,int s,int e)
{
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void display(int * arr,int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,5,6,7};
    int n=5;
    int k=2;
    display(arr,5);
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    display(arr,5);
    return 0;
}