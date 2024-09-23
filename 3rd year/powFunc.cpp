#include<iostream>
using namespace std;

//Iterative
//This will give O(n^2);
int pow(int x,int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    return ans;
}

//Recursive
template<typename T>
T powRec(T a ,T b)
{
    //base case
    if(b==0){
        return 1;
    }

    return a* powRec(a,b-1);
}



int main()
{
    cout<<powRec(2,3)<<endl;
    cout<<powRec(3,3)<<endl;
    return 0;
}