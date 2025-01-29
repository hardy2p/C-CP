#include<bits/stdc++.h>
using namespace std;
// int x=9;

class temp{
    public:
    int a=45;
    int b=45;
    static int c;

    int sum();
};

int temp::c=78;
int temp::sum(int a , int b){
    return a+b;
}


int main()
{
   // int x=78;

    // cout<<x<<endl;
    // cout<<::x<<endl;

    temp obj;
    cout<<temp::c<<endl;
    cout<<obj.c<<endl;
    cout<<temp ::sum(4,5)<<endl;


    return 0;
}