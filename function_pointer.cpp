#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p=*p+1;
}

int main(){
    int a=5;
    int *p=&a;
    //print(p);
    // p=p+1; This is how we update the address of the pointer.
    cout<<*p<<" Before"<<endl;
    update(p);
    cout<<*p<<" After"<<endl;
    
    cout<<p<<endl;

    

    return 0;
}