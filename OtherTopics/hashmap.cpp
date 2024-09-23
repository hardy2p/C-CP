#include <bits/stdc++.h>
using namespace std;

 char findMaxChar(string s)
{
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    int max=-1;
    char ans;
    for(auto i: m)
    {
        if(i.second>max)
        {
            max=i.second;
            ans=i.first;
        }
    }
    return ans;
}

int main()
{
    unordered_map<string,int> m;
    pair<string,int> p1=make_pair("Pushpendra",5);
    pair<string,int> p2("Pulkit",4);
    m["Aryan"]=45;

    m.insert(p1);
    m.insert(p2);
    for(auto i:m)
    {
        cout<<i.first<<"  "<<i.second<<endl;
    }

    //seraching

    cout<<m["Pulkit"]<<endl;
    cout<<m.at("Aryan")<<endl;
    
    //cout<<m.at("unknown")<<endl; THis will give us an error of out of range
    cout<<m["unknown"]<<endl;//This will create a new key with 0 value

    //We can also delete key value pairs from the array
    cout<<m.size()<<endl;
    m.erase("Aryan");
    cout<<m.size()<<endl;
    return 0;
} 