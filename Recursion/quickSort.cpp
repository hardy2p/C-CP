#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // Place element at right location
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    // check for right and left part
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p - 1);
    // right part sort
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[6] = {10, 90, 80, 50, 60, 20};
    int n = 6;
    cout<<"Array before sorting"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout<<endl;

    quickSort(arr, 0, n - 1);

    cout<<"Array after sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}