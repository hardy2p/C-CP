#include<iostream>
#include<vector>
using namespace std;

bool match(string pattern ,string query)
{
    int j=0;
    for(int i=0;i<query.length();i++)
    {
        if(j<pattern.length() && query[i]==pattern[j])
        {
            j++;
        }else if(query[i]>='A' && query[i]<='Z')
        {
            return false;
        }
    }
    return j==pattern.length();
}


vector<bool>camelCase(vector<string> queries,string pattern)
{
    vector<int> res;
    for(int i=0;i<queries.size();i++)
    {
        bool curr= match(pattern,queries[i]);
        res.push_back(curr);
    }
    return res;
}

int main()
{
    cout<<"Hello"<<endl;
    return 0;
}