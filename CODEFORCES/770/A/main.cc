/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 10, 2018 20:44:38 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    string chars = "abcdefghijklmnopqrstuvwxyz";

    cin >> n >> k;

    string pass;

    for(int i = 0; i < n; i++) {
        pass += chars[i % k];
    }

    cout << pass << endl;

    return 0; 
}

