/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 13:01:50 IST
 */

#include <bits/stdc++.h>

using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    unsigned long long int a, b;
    cin >> a >> b;

    for(unsigned long long int i = a; i <= b; i++) {
        for(unsigned long long int j = i+1; j <= b; j++) {
            if(gcd(i, j) == 1) {
                for(unsigned long long int k = j + 1; k <= b; k++) {
                    if(gcd(i,k) != 1 && gcd(j, k) == 1) { 
                        cout << i << " " << j << " " << k << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;

    

    return 0; 
}

