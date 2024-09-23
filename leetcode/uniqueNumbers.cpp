#include <iostream>
#include<vector>
#include<array>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

bool isUnique(int arr[], int size)
{
    vector<int> ans;
    //Vectors are dynamic array in the c++
}

int main()
{
    cout << "Enter the length of the array" << endl;
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printArray(arr,size);
}