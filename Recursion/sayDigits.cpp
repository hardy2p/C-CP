#include<iostream>
using namespace std;


//Head recusrion call before processing
void func(int n){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n<=0){
        return;
    }

    
    func(n/10);

    int digit=n%10;
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;
    //Iterative approach
    // string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    // int temp=n;
    // while(temp != 0){
    //     int digit=temp%10;
    //     cout<<arr[digit]<<" ";
    //     temp=temp/10;
    // }
    func(n);


    return 0;
}