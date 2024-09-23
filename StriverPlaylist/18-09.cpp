#include<bits/stdc++.h>
using namespace std;

string func(string s){
    string str=s.substr(1);
    reverse(str.begin(),str.end());
    return str+s;
}



int main()
{
    // vector<int> nums={10,8,7,9,5};
    // sort(nums.rbegin(),nums.rend());
    // for(auto num:nums) cout<<num<<" ";
    

    string str;
    cin>>str;
    // string ans = func(str);
    // cout<<ans<<endl;
    for(int i=0;i<str.size();i++){
        for(int j=i;j<n;j++){
            string s=s.substr(i,j-i+1);
        }
    }
    
    return 0;
}

/*
vector<int> temp;
        for (auto num : nums) {
            int curr = num;
            while (curr != 0) {
                int digit = curr % 10;
                temp.push_back(digit);
                curr = curr / 10;
            }
        }
        sort(temp.rbegin(), temp.rend());
        string ans = "";
        for (auto num : temp) {
            string str = to_string(num);
            ans += str;
        }
        return ans;
*/