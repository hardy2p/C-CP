#include<bits/stdc++.h>
using namespace std;

string func(string s){
    int i=0;
    int n=s.size();
    stack<string> st;
    while(i<n){
        if((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')){
                string str = string(1, s[i]);
                st.push(str);
            }else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string con = "(" + t2 + string(1, s[i]) + t1 + ")";
                st.push(con);
            }
            i++;
    }
    return st.top();
}
int main()
{
    cout<<func("ab+c*")<<endl;
    return 0;
}