#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void solve(string str,string output,int index,vector<string> &ans)
{
	//base case 
	if(index >= str.length()){
		ans.push_back(output);
		return;
	}
	//exclude
	solve(str,output,index+1,ans);
	//include
	output=str.substr(index);
	solve(str,output,index+1,ans);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output="";
	int index=0;
	solve(str,output,index,ans);
	return ans;
}


int main()
{
    int k;
	cin>>k;
	int temp=52;
	int ans=0;
	while(temp%k != 0){
		temp=temp-1;
		ans=ans+1;
	}
	cout<<ans<<endl;
    return 0;
}