#include<iostream>
using namespace std;

int main(){
    //power of a to b;

    int a,b;
    cin>>a>>b;
    int ans=1;
    while(b>0){
        ans=ans*a;
        b--;
    }
    cout<<ans<<endl;
    return 0;
}