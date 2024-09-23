#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=452;
    int len=floor(log10(a))+1;//return number of digit
    int firstDigit = a/(int)pow(10,len-1);
    cout<<firstDigit<<endl;
    return 0;
}