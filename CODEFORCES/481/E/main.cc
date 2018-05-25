/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 11:34:12 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    // Solution goes here
    long n, w;

    cin >> n >> w;

    int b = 0, t;

    int minB, maxB;

    minB = INT_MAX;
    maxB = INT_MIN;

    for(int i = 0; i < n; i++) {
        cin >> t;
        b += t;
        minB = min(minB, b);
        maxB = max(maxB, b);
    }

    int lf, rg;

    if(minB < 0) lf = -minB;
    else lf = 0;

    if(maxB <= 0) rg = w;
    else rg = w - maxB;
    if(maxB > w || lf > rg) cout << 0 << endl;
    else cout << rg - lf + 1 << endl;

    return 0; 
}

