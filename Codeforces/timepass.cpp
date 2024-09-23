#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    // Brute force:-
    //int n = nums.size();
    // for (int i = 0; i < n-2; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         for (int k = j + 1; k < n ; k++)
    //         {
    //             cout<<i<<' '<<j<<' '<<k<<endl;
    //             cout<<nums[i]<<' '<<nums[j]<<' '<<nums[k]<<endl;
    //             if (nums[i] < nums[j] && nums[j] < nums[k])
    //             {
    //                 return true;
    //             }
    //         }
    //     }
    // }
    // return false;

    int n = nums.size();
    int i=INT_MAX;
    int j=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(nums[i]<= i)
        {
            i=nums[i];
        }else if(nums[i]<= j){
            j=nums[i];
        }else{
            return true;
        }
    }
    return false;

}

int main()
{
    vector<int> nums={20,100,10,12,5,13};
    bool ans=increasingTriplet(nums);
    cout<<ans<<endl;
    return 0;
}