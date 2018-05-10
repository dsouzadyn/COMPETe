/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 00:29:17 IST
 */

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    else return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Solution goes here
    int step, mod;
    while(cin >> step) {
        cin >> mod;
        cout << right << setw(10) << step << right << setw(10) << mod << "    " << ((gcd(step, mod) == 1) ? "Good Choice" : "Bad Choice") << endl;
        cout << endl;
    }
    return 0; 
}

