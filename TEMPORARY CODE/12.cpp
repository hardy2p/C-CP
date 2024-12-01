#include<bits/stdc++.h>
using namespace std;

//Move hashes to front
string func(string str){
    string ans="";
    int n=str.size();
    int hashCnt=0;
    for(int i=0;i<n;i++){
        if(str[i]=='#') hashCnt++;
    }

    for(int i=0;i<hashCnt;i++){
        ans+='#';
    }
    for(int i=0;i<n;i++){
        if(str[i]=='#') continue;
        ans+=str[i];
    }
    return ans;
}

//reduce the size of the string
string func1(string str){
    //str will be like :- aaabbccc
    //we have to return a3b2c3

    int n=str.size();
    string ans="";
    int cnt =1;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            cnt++;
        }else{
            ans=ans+str[i-1];
            ans=ans+to_string(cnt);
            cnt =1;
        }
    }
    ans=ans+str[n-1];
    ans+=to_string(cnt);
    return ans;
}

//traverse a 2d matrix in an spiral order:-
vector<int> spiralOrder(vector<vector<int>> nums){
    int row=nums.size();
    int col=nums[0].size();
    vector<int> ans(row*col);
    int cnt =0;
    while(cnt < row * col){
        //l->R
        
        //T->B


        //R->L


        //B->T


    }
    return ans;
}
int main()
{
    cout<<func("#move#to#start")<<endl;
    return 0;
}