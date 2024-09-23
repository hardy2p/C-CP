#include <bits/stdc++.h>
using namespace std;
void func(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    // All
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n << endl;
    }
}
// Better appraoch
void func2(int n)
{
    for(int i=2;i*i<=n;){
        if(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }else{
            i++;
        }
    }
    //Prime check
    if(n>=2){
        cout<<n<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    cout << "This function will print all the prime factors of the number" << endl;
    func2(n);
    return 0;
}