#include<bits/stdc++.h>
using namespace std;

vector<string> func(string s){
    vector<string> ans;
    string curr ="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(!curr.empty()){
                ans.push_back(curr);
                curr ="";
            }
        }else{
            curr+=s[i];
        }
    }
    if (!curr.empty()) {
        ans.push_back(curr);
    }
    return ans;
}

int main()
{
    string s ="hello     my name is pushpendra singh";
    vector<string> vec=func(s);
    for(auto str:vec){
        cout<<str<<endl;
    }
    return 0;
}