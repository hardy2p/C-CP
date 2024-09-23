#include<iostream>
using namespace std;
//make sure send string by refrence

void reverseStr(string& str ,int s,int e){
    if(s>e){
        return;
    }

    //swap
    int temp=str[s];
    str[s]=str[e];
    str[e]=temp;
    reverseStr(str,s+1,e-1);
}
int main()
{
    string str;
    cin>>str;
    cout<<"Before "<<str<<endl;
    int s=0;
    int e=str.length()-1;
    reverseStr(str,s,e);
    cout<<"After "<<str<<endl;
    return 0;
}