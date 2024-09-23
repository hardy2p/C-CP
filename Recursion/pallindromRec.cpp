#include<iostream>
using namespace std;
bool pallindrom(string str,int s, int e){
    //Base call 
    if(s>e){
        return true;
    }

    //Recursive call
    
    if(str[s] != str[e]){
        return false;
    }else{
        s=s+1;
        e=e-1;
        return pallindrom(str,s,e);
    }
}

int main()
{
    string str;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    pallindrom(str,s,e)?cout<<"Yes":cout<<"No";
    return 0;
}