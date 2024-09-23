#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n)
{
    set<int> myset;
    int val;
    int index;

    while(1)
    {
        val=0;
        while(n)
        {
            index=n%10;
            val+=index*index;
            n/=10;
        }
        if(val==1)
        {
            return true;
            //if end result become 1 return true;
        }else if(myset.find(val) != myset.end())
        {
            //if element is found in that set then loop will occur so we will have to return false
            return false;
        }
        myset.insert(val);
        n =val;
    }

    return false;//complemetry    
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;   
    isHappy(n)?cout<<"Yes":cout<<"No";
    return 0;
}