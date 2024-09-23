#include<iostream>
using namespace std;

int func(int n)
{
    if(n==0)
      return 1;
    
    if(n<0)
      return 0;

    return func(n-1)+func(n-2);
}

int main()
{
    //Link to the question
    //https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
    int n ;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}