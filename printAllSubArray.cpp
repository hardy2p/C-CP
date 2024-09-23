#include <iostream>
using namespace std;

int main()
{
    cout << "Printing all the subarray of an array" << endl;
    int arr[] = {4, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}