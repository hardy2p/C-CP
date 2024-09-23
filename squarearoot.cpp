#include<iostream>
using namespace std;

int tempSol(int n){
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }else if(mid*mid>n){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}

double mainSol(int n, int precsion, int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precsion;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }

    return ans;
}

int main(){
    
    cout<<"Enter the no you want sqrt of"<<endl;
    int n;
    cin>>n;
    double ans=mainSol(n,3,tempSol(n));
    cout<<ans<<endl;
    return 0;
}