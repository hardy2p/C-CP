#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string ans = "A";
    int count = 0;
    while (count < k)
    {
        string b = "";
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == 'A')
            {
                b += "B";
            }
            else
            {
                b += "BA";
            }
        }
        ans = b;
        count++;
        cout<<"When count is "<<count<<" string is "<<ans<<endl;
    }
    int a = 0, b = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] == 'A' ? a++ : b++;
    }
    //cout << a << " " << b;

    // Write your code here
}