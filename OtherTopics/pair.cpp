#include<iostream>
#include <utility>
using namespace std;

int main()
{
    //Pairs are used to store key value like pairs and can also be used to store hetrogenous objects.
    
    pair<string ,int> p1;
    p1.first="Pushpendra";
    p1.second=10;
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}