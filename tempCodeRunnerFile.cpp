#include <iostream>
using namespace std;

int getSum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        //sum=sum+arr[i];
        //sum=sum+*(i+arr);
        //sum=sum+i[arr];
        sum=sum+*(arr+i);
    }
    return sum;
}

int sum(int* arr,int n)
{
    if(n==1){
        return arr[0];
    }
    return sum(arr+1,n-1)+arr[0];

}

void merge(int* arr ,int s,int e)
{
    //Make two new arrays dynamically and copy the elements in them 
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int* first=new int[len1];
    int* second= new int[len2];

    //copying the elements
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge by using merge two sorted array algo
    int i=0;
    int j=0;
    mainArrayIndex=s;

    while(i<len1 && j<len2){
        if(first[i]<second[j]){
             arr[mainArrayIndex++]=first[i++];
        }else{
            arr[mainArrayIndex++]=second[j++];
        }
    }

    while (i<len1)
    {
        arr[mainArrayIndex++]=first[i++];
    }

    while(j<len2)
    {
        arr[mainArrayIndex++]=second[j++];
    }
    
    delete []first;
    delete []second;

}

void mergeSort(int* arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //left call
    mergeSort(arr,s,mid);
    //right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}



int main()
{
    // string s1 = "ab";
    // string s2 = "eidbaooo";
    // bool req=false;
    // int mainCount = 0;
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     mainCount += s1[i];
    // }
    // cout<<"The main count is "<<mainCount<<endl;

    // for (int i = 0; i < s2.length() - s1.length()+1; i++)
    // {
    //     cout<<"Iteration "<<i<<endl;
    //     string ans = s2.substr(i, s1.length());
    //     int count = 0;
    //     cout<<"The substring is "<<ans<<endl;
    //     for (int j = 0; j < ans.length(); j++)
    //     {
    //         count += ans[i];
    //     }
    //     cout<<"The value of ans count is "<<count<<endl;
    //     if (count == mainCount)
    //     {
    //         cout<<"Matched"<<endl;
    //         req = true;
    //         break;
    //     }
    // }


    //int *p;//Bad practice beacause this pointer can be pointing to any random address in the memory 
    // int *p=0;//This will give us a segmentation fault as there is no memmory with 0 location.
    // //cout<<p<<endl;
    // cout<<*p<<endl;//Garbage value
    // int a[]={1,2,3,4};
    // int *p=a++;
    // cout<<*p<<endl;

    //Arrays passing into functions as a pointer

    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int even=0;
    // int odd=0;

    // for(int i=0;i<10;i++){
    //     if(arr[i]%2==0){
    //         even+=arr[i];
    //     }else{
    //         odd+=arr[i];
    //     }
    // }
    // cout<<"Sum of even numbers "<<even <<" Sum of odd numbers "<<odd;
    // // cout<<getSum(arr,6)<<endl;

    // //Now if i want to pass a specific part of the array i can pass it directly by using 
    // cout<<getSum(arr+3,3);

    // int arr[6]={9,7,8,3,2,1};
    // int n=6;

    // mergeSort(arr,0,n-1);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

                  //pointer concept
    int a=50;
    cout<<&a<<endl;
    cout<<a<<endl;

    int* ptr= &a;
    cout<<ptr<<endl;//should give us same as &a
    cout<<*ptr<<endl;//should give us same as a
    cout<<&ptr<<endl;//should gove us address of the ptr itself

    int** ptr1= &ptr;

    cout<<**ptr1<<endl;//should give us value of a
    cout<<*ptr1<<endl;//should give us the address of a
    cout<<ptr1<<endl;//should give us same as &ptr
    cout<<&ptr1<<endl;//should give us a totally different new address of ptr1
    return 0;
}

