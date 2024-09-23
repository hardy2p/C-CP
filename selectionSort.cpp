#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 8, 2, 4, 1, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    cout<<"Before"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {
        // int min=i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

            //For debugging
            // cout<<i<<" "<<j<<endl;
            // for (int  i = 0; i < n; i++)
            // {
            //     cout<<arr[i]<<" ";
            // }
            // cout<<endl;
        }
    }
    cout<<"After"<<endl;

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}