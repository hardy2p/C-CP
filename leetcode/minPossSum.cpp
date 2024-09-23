#include<iostream>
using namespace std;
int minSum(int n ,int target)
{
    int sum=0;
    int a=target/2;
    
    sum=(a)*(a+1)/2;

    for(int i=1;i<=n-a;i++)
    {
        sum=sum+target;
        target++;
    } 
    return sum;
}
int main()
{
    cout<<"Answer "<< minSum(3,3)<<endl;
    cout<<"Answer "<< minSum(2,3)<<endl;
    cout<<"Answer "<< minSum(1,1)<<endl;
    return 0;
}