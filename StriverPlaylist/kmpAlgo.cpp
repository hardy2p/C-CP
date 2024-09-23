#include <bits/stdc++.h>
using namespace std;

void computeLps(string &pat, vector<int> &lps)
{
    int m = pat.size();
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m)
    {
        if (pat[i] == pat[len])
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

vector<int> func(string pat, string txt)
{
    int n = txt.size();
    int m = pat.size();

    vector<int> ans;

    // LPS calculation
    vector<int> lps(m, 0);
    computeLps(pat, lps);

    // Apply kmp
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            ans.push_back(i - m);  // Corrected index calculation
            j = lps[j - 1];
        }
        else if (i < n && txt[i] != pat[j])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return ans;
}

int main()
{
    string text, pattern;
    cin >> text >> pattern;
    vector<int> ans = func(pattern, text);
    for (auto num : ans)
        cout << num << " ";
    cout << endl;
    return 0;
}
