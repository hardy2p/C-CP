#include <bits/stdc++.h>
using namespace std;

// On vectors
bool myComp(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

// On vector pair

bool myCompPair(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
        return p1.second > p2.second;
    if (p1.first > p2.first)
        return true;
    else
        return false;
}

// Using FUNCTORS
class myComparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int
main()
{
    vector<int> nums = {5, 2, 1, 3};
    sort(nums.begin(), nums.end(), myComp);
    for (auto num : nums)
        cout << num << " ";

    cout << endl;
    vector<pair<int, int>> vec = {{2, 3}, {2, 5}, {3, 2}};
    sort(vec.begin(), vec.end(), myCompPair);
    for (auto p : vec)
    {
        cout << p.first << " , " << p.second << " : ";
    }
    cout << endl;
    // Using functors
    vector<int> temp = {1, 2, 3, 4, 5};
    sort(begin(temp), end(temp), myComparator());
    for (int num : temp)
        cout << num << " ";
    cout << endl;
    return 0;
}