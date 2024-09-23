#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &arr, int k, int n)
{
    int s = 0;
    int e = n-1;

    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
           e = mid - 1; 
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={4,5,6,7,8,10};
    int n=arr.size();
    cout<<binary(arr,8,n)<<endl;
    cout<<binary(arr,2,n)<<endl;
    return 0;
}