#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};
    vector<string> ans;
    for (int i = 0; i < words1.size(); i++)
    {
        string curr = words1[i];
        set<char> s1(curr.begin(), curr.end());
        bool flag = true;
        for (int j = 0; j < words2.size(); j++)
        {
            string temp = words2[j];
            set<char> s2(temp.begin(), temp.end());
            cout<<"Printing s1 and s2 "<<endl;
            for(auto x:s1){
                cout<<x<<" ";
            }
            cout<<endl; 
            for(auto x:s2){
                cout<<x<<" ";
            }
            cout<<endl;
            if (s1 != s2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans.push_back(curr);
    }

    return 0;
}