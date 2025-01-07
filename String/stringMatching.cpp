#include<iostream>
using namespace std;

int main()
{
    //Naive way of string matching
    //Return the index of the first occurence of the pattern in the string
    string s="xyxyxyababd";
    string p="ababd";
    int n=s.size();
    int m=p.size();
    int i=0;
    int j=0;
    int ans=-1;
    //Write me naive way of string matching
    for(int i=0;i<n;i++){
        string curr=s.substr(i,m);
        if(curr==p){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}