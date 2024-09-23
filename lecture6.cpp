#include<iostream>
using namespace std;
#include <cmath>
int main(){
    int n;
    cout<<"Converting to binary"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while (n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;//for reverse addition
        n=n>>1; //right shift so that last most bit can be removed from the answer
        i++;
    }

    cout<<"Answer is ans "<<ans<<endl;
    

}