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
    int arr[6]={1,2,3,4,5};
    int pos=1;
    int element=7;

    display(arr,5);

    for(int i=6-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;

    display(arr,6);

    
    return 0;
}