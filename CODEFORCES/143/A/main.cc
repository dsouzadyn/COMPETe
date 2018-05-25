/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 20:39:47 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int d1, d2, c1, c2, r1, r2;

    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    int b, c, d;
    for(int a = 1; a <= 9; a++) {
        b = r1 - a;
        if(a == b || b > 9 || b < 1) continue;
        c = c1 - a;
        if(b == c || a == c || c > 9 || c < 1) continue;
        d = r2 - c1 + a;
        if(d == c || d == b || d == a || d > 9 || d < 1) continue;
        if(a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && c + b == d2 && a + d == d1) {
            cout << a << " " << b << endl;
            cout << c << " " << d << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0; 
}

