#include<iostream>
using namespace std;

int pow(int n){
    //Base call 
    if(n==0){
        return 1;
    }
    //recursive call
    int smaller=pow(n-1);
    return 2*smaller;
}

int main()
{
    int n;
    cout<<"Enter what pow of 2 you want"<<endl;
    cin>>n;
    cout<<pow(n)<<endl;
    return 0;
}