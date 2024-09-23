#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<= mid && right <= high){
        if(nums[left]<= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
         temp.push_back(nums[left]);
            left++;
    }

    while (right <= high) {
        temp.push_back(nums[right]);
        right++;
    }

    for(int i=0;i<temp.size();i++)
    {
        nums[low+i]=temp[i];
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;

    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}
int main()
{
    vector<int> nums = {5, 4, 3, 11, 1, 2};
    mergeSort(nums, 0, nums.size() - 1);
    
    // Corrected line to print each element.
    for (auto num : nums) 
        cout << num << " ";  // <-- use 'num' here
    
    cout << endl;

    return 0;
}