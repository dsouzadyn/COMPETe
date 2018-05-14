/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 20:37:37 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    string b;
    cin >> a;
    cin >> b;
    if(a == b) cout << -1 << endl;
    else cout << max(a.size(), b.size()) << endl;

    return 0; 
}

