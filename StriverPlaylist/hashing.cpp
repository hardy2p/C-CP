#include <bits/stdc++.h>
using namespace std;
void hashFunc()
{
     cout << "Enter the size of array\n";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search frequency for\n";
    int k;
    cin >> k;
    int cnt = 0;
    //This all is taking O(N) time each time we can store in an array precomuted and directly access it
    int hash[13]={};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    cout<<hash[k]<<endl;
}

void freqChar(string str)
{
    map<char,int> mp;
    for(auto c:str) mp[c]++;
    cout<<"Printing freq\n";
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
    freqChar("ababbaaacccaaann");
    return 0;
}