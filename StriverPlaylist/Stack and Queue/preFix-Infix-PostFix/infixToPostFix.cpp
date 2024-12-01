#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> initializePrecedence() {
    unordered_map<char, int> prece;
    prece['^'] = 5;
    prece['*'] = prece['/'] = 4;
    prece['+'] = prece['-'] = 1;
    return prece;
}
string func(string s)
{
    unordered_map<char, int> prece = initializePrecedence(); 
    int n = s.size();
    int i = 0;
    stack<char> st;
    string ans = "";
    while (i < n)
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
        }else if(s[i]==')'){
            while(!st.empty() && st.top() != '('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();//To remove ( bracket
        }else{
            //it is an opertor for now for sure 
            //if stack is empty
            while(!st.empty() && prece[s[i]] <= prece[st.top()]){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    // Infix to postFix conversion:-
    string str;
    getline(cin, str);
    string ans = func(str);
    cout << "Infix to postfix conversion of " << str << " is " << ans << endl;
    return 0;
}