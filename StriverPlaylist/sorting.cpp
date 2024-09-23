
#include <bits/stdc++.h>
using namespace std;

// Selection sort part
// Make sure to pass with refrence otherwise it will not update in actual array

// In selection sort 1 we are storing the minimum index
// in minINdex but in selection sort two we are swapppig it dorectly each time]

void selectionSort1(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}
//This will take more time as compared to other one
void selectionSort2(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

void insertionSort(vector<int> &nums)
{
    int n=nums.size();
    for(int i=1;i<=n-1;i++){
        int j=i;
        //Keep swapping untill previous element is greater then current elemtn
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j],nums[j-1]);
            j--;
        }
    }
}


//Merger sort Code

void mergeSort(vector<int> &nums, int low, int high)
{
    // Base condition
    if (low >= high) return;

    int mid = (low + high) / 2;

    // Recursively sort the left half
    mergeSort(nums, low, mid);

    // Recursively sort the right half
    mergeSort(nums, mid + 1, high);

    // Merge the two halves
    merge(nums, low, mid, high);
}

void merge(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } else {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(nums[left++]);
    }

    while (right <= high) {
        temp.push_back(nums[right++]);
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < temp.size(); i++) {
        nums[low + i] = temp[i];
    }
}


//Quick sort implementation
int func(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }while(arr[j]>=pivot && j>=low+1){
            j++;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int>& arr,int low,int high)
{
    if(low<high){
        int pIndex=func(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}


int main()
{
    vector<int> arr = {5, 4, 3, 11, 1, 2};
    // selectionSort1(arr);
    //insertionSort(arr);
    //mergeSort(arr,0,arr.size()-1);
    //quickSort(arr,0,arr.size()-1);
    qs(arr,0,arr.size()-1);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}