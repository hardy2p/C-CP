#include<bits/stdc++.h>
using namespace std;

string func(string s){
    int i=s.size()-1;
    stack<string> st;

    while(i>=0){
        if((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')){
                st.push(string(1,s[i]));
            }else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string con='(' + t1+string(1,s[i])+t2+')';
                st.push(con);
            }
            i--;
    }
    return st.top();
}

int main()
{
    cout<<func("*+AB-CD")<<endl;
    return 0;
}