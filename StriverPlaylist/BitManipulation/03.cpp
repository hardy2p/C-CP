#include<bits/stdc++.h>
using namespace std;

//fucntion to convert strign to any number format
//use stoi or stol 
//stoi(string ,nullptr, base)
//here string can be binary string or hexadecimal string etc
//for each of them base has to be changed 
//like for binary base = 2
//for hexa decimla base = 16
//default value of base is 0
int binToDecimal(string s){
    return stoi(s,nullptr,2);
}
int hexaDecToDec(string s){
    return stoi(s,nullptr,16);
}
int main()
{
    cout<<binToDecimal("1101")<<endl;
    cout<<hexaDecToDec("4F2A3B1C")<<endl;
    return 0;
}