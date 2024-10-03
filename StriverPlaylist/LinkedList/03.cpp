#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,4,5};
    int n = nums.size();
    map<int,int> odd;
    map<int,int> even;
    for(int i=0;i<n;i++){
        //odd indexing
        if(i%2==0){
            odd[i]=nums[i];
        }else{
            even[i]=nums[i];
        }
    }
    vector<int> ans;
    for(auto it:odd){
        ans.push_back(it.second);
    }
    for(auto it:even){
        ans.push_back(it.second);
    }
    for(auto num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}