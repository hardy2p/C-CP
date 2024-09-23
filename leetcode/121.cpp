#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 4, 8, 7, 2, 5};
    int n = nums.size();
    vector<int> aux(n);
    aux[n - 1] = nums[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > aux[i + 1])
        {
            aux[i] = nums[i];
        }
        else
        {
            aux[i] = aux[i + 1];
        }
    }

    int ans =0;
    for(int i=0;i<n;i++)
    {
        int curr= aux[i]-nums[i];
        if(curr>ans)
        {
            ans = curr;
        }
    }
    cout<<ans<<endl;
    return 0;
}