#include<iostream>
#include<algorithm>
using namespace std;


void bubbleSort(int arr[],int n)
{
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap(arr[j],arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}




void  print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

double median(int arr[],int n)
{
    double ans=0;
    if(n%2==0)
    {
        int index1=(n-1)/2;
        int index2=index1+1;

        ans=(arr[index1]+arr[index2])/2;
    }else{
        int index=n/2;
        ans=arr[index];
    }

    return ans;
}
int main()
{
    int arr[5]={4,6,2,8,10};
    int arr1[5]={1,5,7,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //sorting
    bubbleSort(arr,n);
    bubbleSort(arr1,m);
    // sort(arr,arr+n);
    // sort(arr1,arr1+m);

    print(arr,n);
    print(arr1,m);

    double ans1=median(arr,n);
    double ans2=median(arr1,m);

    double ans=(ans1+ans2)/2;
    cout<<ans<<endl;
    return 0;
}