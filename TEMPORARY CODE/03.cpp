#include <bits/stdc++.h>
using namespace std;

// Convert function to compress the string
string convert(string s) {
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a'] += s[i + 1] - '0'; // Summing character frequencies
        }
    }

    string ans = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            char c = 'a' + i;
            int currFreq = freq[i];
            ans = ans + c + to_string(currFreq); // Compress result
        }
    }
    return ans;
}

// Function to convert decimal to binary
int decToBin(int n) {
    string ans = "";
    while (n != 0) {
        if (n % 2 == 0) {
            ans += '0';
        } else {
            ans += '1';
        }
        n = n / 2;
    }
    reverse(ans.begin(), ans.end());
    return stoi(ans); // Convert binary string to integer
}

// Function to print Fibonacci series up to 'n' terms
void fibSeries(int n) {
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i < n; i++) { // Corrected loop to avoid over-count
        int next = a + b;
        a = b;
        b = next;
        cout << next << " ";
    }
}

// Function to find the nth number in Fibonacci series using recursion
int nthNoInFib(int n) {
    if (n <= 1) return n;
    return nthNoInFib(n - 1) + nthNoInFib(n - 2); // Correct recursive call
}

// Function to print Fibonacci triangle pattern
void fibTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        int a = 0, b = 1;
        cout << a << " " << b << " ";
        for (int j = 1; j < i; j++) { // Loop to print each row's numbers
            int next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << convert("c2a1b2c1a2") << endl; // Test compress function
    cout << decToBin(8) << endl;            // Test decimal to binary
    fibSeries(7);                           // Test Fibonacci series function
    cout << endl;
    cout << nthNoInFib(4) << endl;          // Test nth Fibonacci number
    fibTriangle(4);                         // Test Fibonacci triangle
    return 0;
}
