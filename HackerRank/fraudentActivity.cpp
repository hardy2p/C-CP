#include <bits/stdc++.h>
using namespace std;
int countArr[201];


float getMedian(int d)
{
    int count=0;
    for(int i=0;i<201;i++)
    {
        count+=countArr[i];
        if(count *2 >d)
        {
            return (i/1.0);
        }else if(count*2==d){
            for(int j=i+1;j<201;j++)
            {
                if(countArr[j])
                {
                    return (i+j)/(2.0);
                }
            }
        }
    }
    return -1;
}
activityNoti(vector<int> exp,int d)
{
    int count=0;
    for(int i=0;i<exp.size();i++)
    {
        if(i>=d)
        {
            if(exp[i]>=2*getMedian(d)){
                count++;
            }
            countArr[exp[i-d]]--;
        }
        countArr[exp[i]]++;
    }
    return count;
}

int main()
{
    int n ,d;
    cin>>n>>d;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

    cout<<activityNoti(v1,d);
    return 0;
}