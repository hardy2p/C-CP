#include <bits/stdc++.h>
using namespace std;

void computeLps(string pat, vector<int> &lps)
{
    int n = pat.size();
    lps[0] = 0;
    ;
    int len = 0; // Length of previous suff and pref which were equal
    int i = 1;
    while (i < n)
    {
        if (pat[i] = pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
//Main function
vector<int> KMP(string pat,string txt){
    int m=pat.size();
    int n=txt.size();
    vector<int> lps(m,0);
    computeLps(pat,lps);

    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        if(j==m){
            ans.push_back(i-j+1);// 1 Based indexing
            j=lps[j-1];
        }else if(txt[i] != pat[j]){
            if(j != 0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
    return ans;
}

int main()
{
    string pat = "abab";
    string txt = "ababcabababababc";
    vector<int> ans = KMP(pat, txt);
    cout << "Index at which pat is present in txt are: "<<endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}