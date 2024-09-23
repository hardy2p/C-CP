#include <bits/stdc++.h>
using namespace std;
bool canPlace(vector<int> nums,int dist,int c){
    int cnt=1;
    int last=nums[0];

    for(int i=1;i<nums.size();i++){
        if(nums[i]-last >= dist){
            cnt++;
            last=nums[i];
        }
        if(cnt>=c) return true;
    }
    return false;
}
int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int s = 1;
    int e = (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
                                       //LINEAR APPROACH
    // int ans=0;
    // for (int i = s; i <= e; i++)
    // {
    //     if(canPlace(nums,i,c)) continue;
    //     else{
    //         ans=i-1;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;
                                      //OPTIMIZED APPROACH
    int ans=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(canPlace(nums,mid,c)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}