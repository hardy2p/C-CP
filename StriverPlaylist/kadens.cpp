#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={2,-3,4,-1,-2,1,5,-3};
    int maxSum=INT_MIN;
    int currSum=0;
    int start=0;
    int ansStart=0;
    int ansEnd=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(currSum==0) start=i;
        currSum+=nums[i];
        //maxSum=max(maxSum,sum);
        if(currSum>maxSum){
            maxSum=currSum;
            ansStart=start;
            ansEnd=i;
        }

        if(currSum<0){
            currSum=0;
        }
    }

    for(int i=ansStart;i<=ansEnd;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Answerr "<<maxSum;
    return 0;
}