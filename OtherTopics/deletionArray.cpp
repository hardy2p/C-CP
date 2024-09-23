#include<iostream>
using namespace std;


void display(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    display(arr,5);
    int pos=0;
    for(int i=pos;i<5-1;i++)
    {
        arr[i]=arr[i+1];
    }

    display(arr,4);
    return 0;
}