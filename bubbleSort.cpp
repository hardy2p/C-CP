#include<iostream>
using namespace std;

int main(){
    int arr[]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    cout<<"Before"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Bubble sort is also known as sinking sort.
    //In this adjecent element are compared and the bigger element is placed at the end after each round

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    cout<<"After"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}