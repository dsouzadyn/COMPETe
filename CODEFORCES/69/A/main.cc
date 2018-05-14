/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 00:46:38 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x = 0, y = 0, z = 0;
    int tx, ty, tz;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tx >> ty >> tz;
        x += tx;
        y += ty;
        z += tz;
    }

    if(x == 0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0; 
}

