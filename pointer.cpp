#include<iostream>
using namespace std;
 
int main(){
    int num=5;
    //& is Address of operator which is used to fetch adress of any operator.
    //Address is always is in hexadecimal number


    //declaring and intializing the pointer
    int *ptr=&num;

    //num++;
    num=num+1;//num=6
    cout<<&num<<endl;
    cout<<*ptr<<endl;//*ptr is a pointer which will be poiting to the num
    cout<<num<<endl;
    cout<<ptr<<endl;//ptr would store the memory location of the num
    cout<<&ptr<<endl;//pointer has its own location too

    int i=9;
    int *p=&i;//p pointer storing the address of i 
    *p=*p+1;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=*p;
    a=a+1;
    cout<<a<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;


    // int b=p;
    // cout<<*b<<endl;
    //This will give us an type conversion error because we are converting a integer to pointer
    
    return 0;
}