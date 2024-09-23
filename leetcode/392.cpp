#include<iostream>
using namespace std;
bool isSubsequence(string s,string t)
{
    int i=0;
    int j=0;
    int n=s.size();
    int m=t.size();

    while(i<n && j<m)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }else{
            j++;
        }
    }

    return i==n;
}
int main()
{
    string s,t;
    cout<<"Enter the value of string s and t "<<endl;
    cin>>s>>t;
    isSubsequence(s,t)?cout<<"Yes it is a substring"<<endl:cout<<"Not a substring"<<endl;
    return 0;
}