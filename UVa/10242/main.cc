/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 12:16:51 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    double x1, x2, x3, x4, y1, y2, y3, y4;
    cout << fixed << setprecision(3);

    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        if(x1 == x3 && y1 == y3)
            cout << (x2 + x4) - x1 << " " << (y2 + y4) - y1 << endl;
        else if (x1 == x4 && y1 == y4)
            cout << (x2 + x3) - x1 << " " << (y2 + y3) - y1 << endl;
        else if (x2 == x3 && y2 == y3)
            cout << (x1 + x4) - x3 << " " << (y1 + y4) - y3 << endl;
        else
            cout << (x1 + x3) - x2 << " " << (y1 + y3) - y2 << endl;
    }

    return 0; 
}

