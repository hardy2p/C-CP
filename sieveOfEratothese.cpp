#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n ){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
} 


int main(){
    //Count prime no untill n 

    int n ;
    cin>>n;
    // int count=0;
    // for(int i=2;i<n;i++){
    //     if(isPrime(i)){
    //         count++;
    //     }
    // }
    // cout<<"No of elements are "<<count<<endl;

    vector<bool> prime(n+1,true);

    prime[0]=prime[1]=false;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(prime[i]){
            cnt++;

            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}