#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[7]={2,1,2,3,1,2,4};
    int max=-1;
    for(int i=0;i<7;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    vector<int> count(max+1,0);

    for(int i=0;i<7;i++)
    {
        count[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
        for(int j=0;j<count[i];j++){
            cout<<i<<" ";
        }
    }

    
    return 0;
}