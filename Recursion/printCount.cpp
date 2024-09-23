#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);
}

int main()
{
    cout << "Enter the value you want count from" << endl;
    int n;
    cin >> n;
    print(n);
    return 0;
}