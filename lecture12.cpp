#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for" << endl;
    int k;
    int ans = -1;
    cin >> k;

    // Start and end ko bahar declare kro nhi tw andar har bar mid ki value actual mid k barabar hi ayegi na bhai
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            break;//nhi tw time complexity kam nhi hogi
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "The element is found at " << ans << " index" << endl;
    return 0;
}