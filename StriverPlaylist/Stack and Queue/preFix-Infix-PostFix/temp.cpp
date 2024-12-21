#include <bits/stdc++.h>
using namespace std;

// Precedence deciding
int prece(char c)
{
    if (c == '^')
    {
        return 4;
    }
    else if (c == '*' || c == '/')
    {
        return 3;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    return -1;
}

// Infix to postfix
string func(string s)
{
    string ans = "";
    stack<char> st;
    int i = 0;
    int n = s.size();
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
            // now only operator is left over here
            while (!st.empty() && prece(s[i]) <= prece(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

//infix to prefix
/*
Steps:-
1. Reverse the orignal string 
2. Change the parathesis
3. Apply infixx to postfix under the controlled condition
4. Again reverse the string 
*/
void reverse(string& s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        swap(s[i++] , s[j--]);
    }
}
string func2(string s){

    //Reverse the string
        reverse(s);
        //Change the paranthesis
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                s[i]=')';
            }else if(s[i]==')'){
                s[i]='(';
            }
        }
    //Apply postfix conversion

    string ans="";
    int i=0;
    stack<char> st;
    int n=s.size();
    while(i<n){
        if((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')){
                ans+=s[i];
            }else if(s[i]=='('){
                st.push('(')
            }else if(s[i]==')'){
                while(!st.empty() && s[i] != '('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }else{
                while(!st.empty() && prece(s[i]) < prece(st.top())){
                    ans+=st.top();
                    st.pop();
                }
            }
            i++;
    }

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    reverse(ans);
    return ans;
}


//postfix to infix:-
string func3(string s){
    string ans="";
    int i=0;
    stack<string> st;
    int n=s.size();
    while(i<n){
        if((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')){
                ans
            }
    }
}
int main()
{
    string infix = "A+B*(C^D-E)^(F+G*H)-I";
    cout << "Postfix: " << func(infix) << endl;
    return 0;
}