#include <iostream>
using namespace std;

// function declaration and execution
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int factorial(int n)
{
    int fact = 1;
    while (n != 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int setBits(int a, int b)
{
    int ans = 0;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            ans++;
        }
        a = a >> 1;
    }
    while (b != 0)
    {
        if (b & 1 == 1)
        {
            ans++;
        }
        b = b >> 1;
    }
    return ans;
}

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    int a=0;
    int b=1;
    int curr=0;
    for(int i=2;i<=n;i++){
        //
        curr=a+b;
        a=b;
        b=curr;
    }
    return curr;
}
int main()
{
    cout << "Set bits " << setBits(7, 7);
}