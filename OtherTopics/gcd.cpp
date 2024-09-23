#include<iostream>
using namespace std;

int gcd(int a ,int b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    //Euclid algorithm
    cout<<gcd(15,20)<<endl;

    return 0;
}