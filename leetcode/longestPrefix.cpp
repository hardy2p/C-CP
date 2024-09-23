#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& str){
    string ans="";
    //lexiographoically sort
    sort(str.begin(),str.end());

    string first=str[0];
    string last=str[str.size()-1];

    for(int i=0;i<min(first.length(),last.length());i++)
    {
        if(first[i]!=last[i])
        {
            return ans;
        }
        ans+=first[i];
    }

    return ans;

}

int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string ans=longestCommonPrefix(strs);
    ans==""?cout<<"No common prefix"<<endl:cout<<ans<<endl;
    return 0;
}