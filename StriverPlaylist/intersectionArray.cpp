#include<bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> a,vector<int> b)
{
    int n=a.size();
    int m=b.size();
    int i=0;int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]==b[j]){
           ans.push_back(a[i]);
           i++;
           j++; 
        }else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
    
}
int main()
{
    vector<int> a={1,2,2,3,3,4,5,6};
    vector<int> b={2,3,3,4,5,6,6,7};
    vector<int> ans=func(a,b);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}