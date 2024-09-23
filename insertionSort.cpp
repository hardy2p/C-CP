#include <iostream>
using namespace std;

int main(){
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else {
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<"After"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}