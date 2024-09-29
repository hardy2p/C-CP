#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Code to print all the substring of a string\n";
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"All the substring of the string are"<<endl;

    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string str=s.substr(i,j-i+1);
            cout<<str<<" ";
            cout<<endl;
        }
    }
    return 0;
}