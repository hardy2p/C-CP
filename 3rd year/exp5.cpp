#include<iostream>
using namespace std;

int partition(int arr[],int s ,int e)
{
    int pivot=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
        {
            count++;
        }
    }

    int index=s+count;
    swap(arr[s],arr[index]);

    //Chcek for left and the right part

    int i=s;
    int j=e;

    while(i<index && j>index)
    {
        while(arr[i]<pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<index && j>index)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return index;
}





void quickSort(int arr[],int s,int e)
{
    //Base case
    if(s>=e)
    {
        return;
    }

    int p=partition(arr,s,e);

    //pehle wala sort krdo
    quickSort(arr,s,p-1);
    //Badd wala sort krdo
    quickSort(arr,p+1,e);
}


int main()
{
    int arr[]={2,4,1,6,9};
    int n =5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}