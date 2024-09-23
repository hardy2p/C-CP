#include<iostream>
using namespace std;
int getSum(int* arr,int n ){
    //int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }

    return sum;
    
}
//Study this to know about DMA 
//https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118785/offering/1381141
int main(){
    int n ;
    cin>>n;


    int* arr= new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        //arr[i]=*(arr+i)
    }
    cout<<"The sum "<<getSum(arr,n);
    return 0;
}