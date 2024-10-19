


#include <bits/stdc++.h>
using namespace std;
string invert(string s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    return ans;
}
char findKthBit(int n, int k)
{
    string s = "0";
    for (int i = 1; i < n; i++)
    {
        string invStr = invert(s);
        reverse(invStr.begin(), invStr.end());
        s = s + "1";
        s = s + invStr;
    }
    return s[k-1];
}

/*

    S1 = "0"
    S2 = "011"
    S3 = "0111001"
    S4 = "011100110110001"

*/
int main()
{
    cout<<findKthBit(3,1)<<endl;
    return 0;
}