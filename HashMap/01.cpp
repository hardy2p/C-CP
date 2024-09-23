#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int ,int> map;
    //Insertion
    map[0]=4;
    map[1]=8;

    for(auto x:map)
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
    //Here x act as a iterator
    //.first is used to print key
    //.second is used to print value at this key

    return 0;
}