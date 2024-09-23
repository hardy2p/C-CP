#include<iostream>
using  namespace std;

int main(){
    int a=45;
    int *p=&a;
    int **q=&p;

    //All will print 45
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

    //All will print address of a
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<*q<<endl;

    //All will print address of p 
    cout<<&p<<endl;
    cout<<q<<endl;
    //Will print address of q
    cout<<&q<<endl;
    return 0;
}