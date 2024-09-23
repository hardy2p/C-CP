#include<iostream>
#include<vector>

using namespace std;
//way to calculate the set bits of a number.
int setBits(int n)
{
    int count=0;
    while(n){
        count+= n & 1;
        n>> =1;
    }
    return count;
}

vector<int> countBits(int n)
{
    vector<int> ans;
    for(int i=0;i<=n;i++)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    
    return 0;
}