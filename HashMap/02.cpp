#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int ,int> map;
    map[0]=4;
    map[1]=8;
    map[2]=12;
    map[3]=16;

    int key;
    cout<<"Enter the value of key"<<endl;

    cin>>key;
    if(map.count(key))//This function will return 1 if key is present in the map if it doest then return 1 
    {
        cout<<"Key found"<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}