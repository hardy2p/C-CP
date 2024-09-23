#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,5,7};
    
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;//2+1=3
    cout<<*(arr+1)<<endl;//Element at second location


    //We can print elemets of the array by using this type of the system
    //All will print the element at 2nd index
    int i=2;
    cout<<arr[i]<<endl;
    cout<<*(arr+i)<<endl;
    cout<<i[arr]<<endl;

    /*
    As we know the compiler sees
    arr[i]=*(arr+i)
    so we can also write 
    i[arr]=*(i+arr)
    yaad krne la trika maybe.
    */



    return 0;
}