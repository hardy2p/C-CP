#include<iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> ans(n);
        int num=0;
        for(int i=0;i<n;i++)
        {
            int digit=digits[i];
            num=(num*10)+digit;
        }

        num=num+1;
        int temp=num;
        int index=n-1;
        while(temp!=0)
        {
            int digit=temp%10;
            temp=temp/10;
            ans[index]=digit;
            index--;
        }
        return ans;
    }
int main()
{
    vector<int> digits={1,2,3};
    vector<int> ans=plusOne(digits);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}