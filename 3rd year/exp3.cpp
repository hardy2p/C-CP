#include<bits/stdc++.h>
using namespace std;

void func(int* arr ,int n)
{
    vector<bool> visited(n,false);

    for(int i=0;i<n;i++){
        if(visited[i]==true)
        {
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }

        cout<<arr[i]<<" "<<count<<endl;
    }
}

void frequency(int* arr,int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }

    cout<<"Element frequency"<<endl;
    for(auto i:map)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
    int arr[5]={5,10,15,10,5};
    int n =5;
    frequency(arr,n);
    // func(arr,n);

    return 0;
}