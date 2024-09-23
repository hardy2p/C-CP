#include<iostream>
using namespace std;
void reverseArray(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    //Taking input
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before reversal"<<endl;
    printArray(arr,size);
    reverseArray(arr,size);
    cout<<endl;
    cout<<"Array after reversal"<<endl;
    printArray(arr,size);   
}