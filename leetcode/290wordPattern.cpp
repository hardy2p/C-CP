#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern ,string s)
{
    unordered_map<char,string> m;
    int k=0;
    int index=0,len=0;
    string str="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=" ")
        {
            len++;
        }else{
           str=s.substr(index,len);
           m[pattern[k]]=str;
           k++;
           index=i;
           len=0; 

           
        }

        //string aa chuki h
    }
}
int main()
{
    cout<<"Hello"<<endl;
    return 0;
}