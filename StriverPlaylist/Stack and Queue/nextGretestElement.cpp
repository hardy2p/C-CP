#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> nums){
    int n=nums.size();
    vector<int> nge(n,-1);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[i]>=st.top()){
            st.pop();
        }
        if(!st.empty()){
            nge[i]=st.top();
        }
        st.push(nums[i]);
    }
    return nge;
}



int main()
{
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> nge = func(nums);
    for (int num : nge)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}