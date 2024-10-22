#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=5,b=15,c=20;
    int* arr[] ={&a,&b,&c};
    cout<<*arr[1]<<endl;
    return 0;
}