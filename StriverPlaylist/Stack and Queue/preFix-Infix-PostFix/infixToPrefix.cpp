#include <bits/stdc++.h>
using namespace std;
void reverse(string &str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

unordered_map<char, int> initializePrecedence()
{
    unordered_map<char, int> prece;
    prece['^'] = 5;
    prece['*'] = prece['/'] = 4;
    prece['+'] = prece['-'] = 1;
    return prece;
}

string func(string s)
{
    unordered_map<char, int> prece = initializePrecedence();
    reverse(s);

    // Change the brackets
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else if (s[i] == ')')
        {
            s[i] = '(';
        }
    }

    // apply controlled infix->postfix
    int i = 0;
    string ans = "";
    stack<char> st;

    while (i < s.size())
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            // Now only operand is left
            if (!st.empty() &&
                (prece[s[i]] < prece[st.top()] ||
                 (prece[s[i]] == prece[st.top()] && s[i] != '^')))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    // Now reverse again the string
    reverse(ans);
    return ans;
}

int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    string prefix = func(infix);
    cout << "Infix Expression: " << infix << endl;
    cout << "Prefix Expression: " << prefix << endl;
    return 0;
    return 0;
}