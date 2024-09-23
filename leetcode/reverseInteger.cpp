#include<iostream>
using namespace std;

int main(){
    //This all is just for basic case but in edge case when reverse case will get out of range we will use different method
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Reversing the number"<<endl;
    int rev=0,i=0;
    while(n!=0){
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    cout<<"The reverse of the number is "<<rev<<endl;
}