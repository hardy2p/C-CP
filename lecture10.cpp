#include<iostream>
using namespace std;

int main(){
    cout<<"Swap alternate"<<endl;
    cout<<"Enter the length of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before reversal"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Main algorithm starts from here

    for(int i=0;i<size-1;i=i+2)
    {
        //swapping
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    cout<<"Array after reversal"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}