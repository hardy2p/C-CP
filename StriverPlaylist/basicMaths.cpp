#include<bits/stdc++.h>
using namespace std;


// bool isArmstrong(int n)
// {
//     int temp=n;
//     int l=0;
//     vector<int> nums;
//     while(temp != 0)
//     {
//         int digit=temp%10;
//         l++;
//         nums.push_back(digit);
//         temp=temp/10;
//     }
//     int ans =0
//     for(int i=0;i<nums.size();i++)
//     {
//         ans=ans+pow(nums[i],l);
//     }
//     return ans==n;
// }
void sieve(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i == 0) {
            cout<<i<<" "<<n/i<<endl;
        }
    }
}

void gcd(int a,int b){
    int i=min(a,b);
    while(i >0)
    {
        if(a%i == 0 && b%i==0){
            cout<<i<<endl;
            break;    
        }
        i--;
    }
}

void revArr(vector<int> &nums,int s,int e){
    if(s>=e) return;
    int temp=nums[s];
    nums[s]=nums[e];
    nums[e]=temp;
    revArr(nums,++s,--e);
}

void tolower(string input)
{
     string str = "";
        for (auto x : input) {
            str += (char)tolower(x);
        }
    cout<<str<<endl;
}
int main()
{
    int n;
    //cin>>n;
    // cout<<"sieve"<<endl;
    // sieve(n);
    // gcd(15,5000);

    // vector<int> nums={1,2,3,4,5};
    // revArr(nums,0,nums.size()-1);
    // for(auto i:nums) cout<<i<<' ';

    tolower("HellOO,90 ");
    return 0;
}