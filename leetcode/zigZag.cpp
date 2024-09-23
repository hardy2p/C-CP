#include<iostream>
#include <cmath>
using namespace std;
//without numsrow
string zigzag(string str)
{
    string ans="";
    int l=ceil(str.length()/5);
    int i=0;
    while(i<=l)
    {
        // int index=0;
        if(i%2==0)
        {
            for(int j=i;j<str.length();j=j+4)
            {
                 ans=ans+str[j];
            }
            i=i+1;
        }else if(i%2==1){
            for(int j=i;j<str.length();j=j+2)
            {
                 ans=ans+str[j];
            }
            i=i+1;
        }
    }
    return ans;
}

string convert(string str, int numsRow) {
    //Via neetcode on youtube
    if (numsRow==1) return str;
    //to return 
    string ans="";
    for(int r=0;r<numsRow;r++)
    {
        int inc=(numsRow-1)*2;
        for(int i=r;i<str.length();i=i+inc)
        {
            ans=ans+str[i];
            if(i>0 && i<numsRow-1 && i+inc-2*r<str.length())
            {
                ans=ans+str[i+inc-2*r];
            }

        }
    }
    return ans;

    }

int main()
{
    //P   A   H   N
    //A P L S I I G
    //Y   I   R
    string str="PAYPALISHIRING";
    string ans=convert(str,4);
    cout<<ans<<endl;
    return 0;
}