#include<iostream>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;

    if(n==0){
        return a;
    }

    for(int i=2;i<=n;i++){
        int temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}

int main()
{
    cout<<"Enter the term you want"<<endl;
    int n;
    cin>>n;
    cout<<fib(n)<<endl;

    return 0;
}