/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 01:10:22 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    map<int, int> rev;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> t;
        rev[t] = i;
    }
    for(auto &item: rev) {
        cout << item.second << " ";
    }
    cout << endl;

    return 0; 
}

