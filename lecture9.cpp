#include<iostream>
#include<array>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[9];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    
    // for(int i=0;i<9;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    printArray(arr,9);//Other way of printing the array
    cout<<endl;
    //How to get size of the array
    int sizeArr=sizeof(arr)/sizeof(int);
    cout<<"The size of the array is "<<sizeArr<<endl;
    //You can not  call the arrya in the functions without using the pointers in there.And for using the inbuilt functions STL is important we will study stl later on.


    cout<<"Maximum and minimum in an array"<<endl;
    int max=arr[0];
    for(int i=0;i<sizeArr;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The maximum element in the array is "<<max<<endl;
    //same approach can be used for the minimum element

    //Linear Searching in an array 
    int k;
    cout<<"Enter the element you want to search for"<<endl;
    cin>>k;
    for( int i=0;i<sizeArr;i++)
    {
        if(arr[i]==k)
        {
            cout<<"Yes element is present in the array"<<endl;
        }
    }
    


}