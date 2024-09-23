#include <bits/stdc++.h>
using namespace std;

// Sieve of eratothesis is used to claculate all prime no under n;

int sieve(int n)
{
    vector<int> temp(n + 1, true); // all are not prime
    temp[0] = temp[1] = false;
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (temp[i] == true)
        {
            cnt++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                temp[j] = false;
            }
        }
    }
    return cnt;
}
// Euclid algorithm

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

//TC O(log(min(a,b))) gcd by euclid algorithm

//GCD without recursion
int gcdNew(int a , int b){
    if(a==b) return a;
    if(a>b){
        return gcd(a-b,b);
    }else{
        return gcd(a,b-a);
    }
}
//O(min(a,b)) TC gcdNew

// differnet swaps i know till now
void swap(int &a, int &b)
{
    // without using extra space and no arithmertic operator too
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void swap1(int &a, int &b)
{
    // without extra space
    a = a + b;
    b = a - b;
    a = a - b;
}

void normalSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// to calculate a  no is prime or not in  better complexity
bool isPrimeBrute(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Print all divisor of a number
vector<int> allDivisor(int n)
{
    vector<int> ans;
    // Optimized
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
                ans.push_back(n / i);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int ans = sieve(n);
    cout << "All prime no under n is " << ans << endl;

    cout << "Enter a and b for swap and euclid algorithm " << endl;
    int a, b;
    cin >> a >> b;

    cout << "HCF or gcd of two no will be " << gcd(a, b) << endl;
    swap(a, b);
    swap1(a, b);
    normalSwap(a, b);
    cout << "swap with the help of xor " << a << ' ' << b << endl;
    cout << "swap without extra space " << a << ' ' << b << endl;
    cout << "Normal Swap " << a << ' ' << b << endl;

    cout << "Checking a is a prime no via Brute Force " << isPrimeBrute(a) << endl;

    return 0;
}