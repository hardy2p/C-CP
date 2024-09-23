#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int,greater<int>> val;
    val.insert(5);
    val.insert(4);
    val.insert(3);
    val.insert(2);
    val.insert(1);


    //Auto key word traversing
    for(auto i: val){
        cout<<i<<' ';
    }
    cout<<endl;

    //iteator traversing
    set<int ,greater<int>> :: iterator itr;
    for(itr= val.begin() ; itr != val.end() ;itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;


    //remove all the elements upto 4 in set
    val.erase(val.begin(),val.find(4));//4 will not be removed
    //Traversing again
    for(itr= val.begin() ; itr != val.end() ;itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;


    
    return 0;
}