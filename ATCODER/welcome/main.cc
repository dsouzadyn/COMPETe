/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 17:21:06 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int a, b, c;
    string s;

    cin >> a;
    cin >> b >> c;

    cin >> s;

    cout << (a + b + c) << " " << s << endl;

    return 0; 
}

