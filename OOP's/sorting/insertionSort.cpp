#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//In selection sort after each iteration smallest elemetnet is present at staign of the array
void selectionSort(int* arr, int n){
    for(int i=0;i<n-1;i++){
        //Smallest element = arr[i]
        int minIndex=i;
        int num=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
                num=arr[j];
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

//Bubble sort is also called as sinking sort in this after each itearttion largest element is placed at last of the array
//Adjecent element are compared in this
void bubbleSort(int* nums, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

//5,4,3,2,1
void insertionSort(int* arr, int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    display(arr, n);

    //selectionSort(arr, n);
    bubbleSort(arr,n);
     display(arr, n);


    return 0;
}