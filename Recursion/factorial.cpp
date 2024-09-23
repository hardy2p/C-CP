#include<iostream>
using namespace std;

int factorial(int n){
    //Base case
    if(n==0 || n==1){
        return 1;
    }
    //recursive call
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value you want factorial of"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}