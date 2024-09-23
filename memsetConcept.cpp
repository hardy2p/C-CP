#include<bits/stdc++.h>
using namespace std;
//memSet is in <cstring> class in c++

int main()
{
    // int n;
    // cin>> n;
    // int a[n]={1};//Dynamic allocation can arise a runtime error
    // cout<<a[5];

    //Memset is intalized
    int n;
    cin>>n;
    int a[n];
    memset(a,-1,sizeof(a));//We can only store 0 and -1 in the memset ant it is used in array
    cout<<a[5];
    return 0;
}