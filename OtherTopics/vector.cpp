#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> vect = {{1, 3},
                                {2, 6},
                                {15, 18},
                                {8, 10}};

    sort(vect.begin(), vect.end());
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }

    vector<string> str = {"flower", "flow", "flight"};
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}