#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono; // For timing utilities

int gcd(int a, int b) {
    int res = min(a, b);
    while (res > 1) {
        if (a % res == 0 && b % res == 0) return res;
        res--;
    }
    return 1;
}

int gcdWithoutRec(int a ,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int gcdEuclid(int a, int b) {
    return (a == 0) ? b : gcdEuclid(b % a, a);
}



int main() {
    int a = 1234567890, b = 987654321;
    
    // Measure time for gcd function
    auto start1 = high_resolution_clock::now(); // Start time
    cout << "gcd: " << gcd(a, b) << endl;
    auto stop1 = high_resolution_clock::now();  // End time
    auto duration1 = duration_cast<milliseconds>(stop1 - start1);
    cout << "Time taken by gcd: " << duration1.count() << " milliseconds" << endl;

    // Measure time for gcdEuclid function
    auto start2 = high_resolution_clock::now(); // Start time
    cout << "gcdEuclid: " << gcdEuclid(a, b) << endl;
    auto stop2 = high_resolution_clock::now();  // End time
    auto duration2 = duration_cast<milliseconds>(stop2 - start2);
    cout << "Time taken by gcdEuclid: " << duration2.count() << " milliseconds" << endl;


    //Measure time of without recusrsion call
    auto start3=high_resolution_clock::now();
    cout<<" gcdWithoutRec "<<gcdWithoutRec(a,b)<<endl;
    auto stop3=high_resolution_clock::now();
    auto duration3=duration_cast<milliseconds>(stop3-start3);
    cout << "Time taken by gcdWithoutRec: " << duration3.count() << " milliseconds" << endl;


    return 0;
}
