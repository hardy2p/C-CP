#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter the opetrator"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The Addition of the number is "<<a+b<<endl;
        break;
    case '-':
        cout<<"The Subtraction of the number is "<<a-b<<endl;
        break;
    case '*':
        cout<<"The Multiplication of the number is "<<a*b<<endl;
        break;
    case '/':
        cout<<"The Division of the number is "<<a/b<<endl;
        break;
    default:
        cout<<"Please choose from + ,- ,* ,/"<<endl;
        break;
    }


    cout<<"Getting a to the power b"<<endl;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=a*ans;
    }
    cout<<"The answer is "<<ans<<endl;

}