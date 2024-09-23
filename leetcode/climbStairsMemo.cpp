#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int climbStairs(int n , unordered_map<int ,int >& memo)
{
    //Base case 
    if(n==0 || n==1)
    {
        return 1;
    }

    //memo
    //This would compare the memo from start and end.
    //The function returns an iterator or a constant iterator which refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 
    //memo.find return an iterator pointing to the key where it is presnt if it is not present then it return the map.end() itreaator.
    
    if(memo.find(n)== memo.end())
    {
        memo[n]=climbStairs(n-1,memo) +climbStairs(n-2,memo);
    }
    return memo[n];
}
int main()
{
    unordered_map<int , int> memo;
    int n ;
    cin>>n;
    cout<<climbStairs(n ,memo);
    return 0;
}