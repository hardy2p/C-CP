#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b)
{
    if (a.length() > b.length())
    {
        return addBinary(b, a);
    }

    // Edge case should be here
    if (a == "0" && b == "0")
    {
        return "0";
    }

    // Main work
    int diff = b.length() - a.length();
    string padding = "";
    for (int i = 0; i < diff; i++)
    {
        padding.push_back('0');
    }

    string res = "";
    char carry = '0';

    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == '1' && b[i] == '1')
        {
            if (carry == '1')
            {
                res.push_back('1');
                carry = '1';
            }
            else
            {
                res.push_back('0');
                carry = '1';
            }
        }
        else if (a[i] == '0' && b[i] == '0')
        {
            if (carry == '1')
            {
                res.push_back('1');
                carry = '0';
            }
            else
            {
                res.push_back('0');
                carry = '0';
            }
        }
        else
        {
            if (carry == '1')
            {
                res.push_back('0');
                carry = '1';
            }
            else
            {
                res.push_back('1');
                carry = '0';
            }
        }
    }

    if (carry == '1')
    {
        res.push_back('1');
    }

    reverse(res.begin(), res.end());

    // Leading zeros
    int k = 0;
    for (int i = 0; i < res.length(); i++)
    {
        if (res[i] != 0)
        {
            break;
        }
        k++;
    }

    return res.substr(k);
}


//via other method

string addBin(string a,string b)
{
    
}



int main()
{
    string a;
    string b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
    return 0;
}
