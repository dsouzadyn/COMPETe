/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 01:05:35 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, c;
    while(cin >> n && n != 0) {
        cin >> m >> c;
        int rem = c;
        cout << ( (n - 7) * (m - 7) + rem ) / 2 << endl;
    }

    return 0; 
}

