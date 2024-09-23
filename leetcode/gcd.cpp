#include<iostream>
using namespace std;


int main(){
    int a ,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    int result=min(a,b);
    while(result>0){
        if(a % result ==0 && b % result ==0)
        {
            cout<<"GCD or HCF of "<<a<<" and "<<b<<" is "<<result<<endl;
            break;
        }
        result--;
    }
    return 0;
}