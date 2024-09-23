#include<iostream>
using namespace std;

bool isPrime(int n ){
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;
    int count=0;

    for(int i=2;i<n;i++){
        if(isPrime(i)){
            count++;
        }
    }
    cout<<"Answer = "<<count<<endl;
    return 0;
}