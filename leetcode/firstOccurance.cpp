#include<iostream>
using namespace std;
int strStr(string a, string b) {
    for(int i=0;i<a.length();i++)
    {
        string str=a.substr(i,b.length());
        if(str==b)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    //find the first occurance of b in a
    // Means a is  bigger than b 
    //So iterate over a in window size of b
    //and if they match return the index
    //else return -1
    cout<<strStr("sadbutsad","sad")<<endl;
    return 0;
}