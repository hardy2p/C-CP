#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int> vec;
    for(int i=0;i<5;i++)
    {
        vec.push_back(i);
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"Subarray part"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<vec[k]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}