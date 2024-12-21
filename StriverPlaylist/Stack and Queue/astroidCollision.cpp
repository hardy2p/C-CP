#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {10,2,-5};
    int n = nums.size();
    stack<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        if (st.empty() || st.top() * nums[i] > 0)
        {
            st.push(nums[i]);
        }
        else
        {
            if (!st.empty() && abs(st.top()) < abs(nums[i]))
            {
                st.pop();
                st.push(nums[i]);
            }
            else if (abs(st.top()) > abs(nums[i]))
                {
                    continue;
                }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
        }
    }
    // stack will be prepared by now
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}