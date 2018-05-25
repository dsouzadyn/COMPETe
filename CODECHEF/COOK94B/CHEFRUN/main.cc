/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 21:37:04 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    double x1, x2, x3;
    double v1, v2;
    int t;
    cin >> t;
    while(t--) {
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        double t1 = abs((x3 - x1)/v1);
        double t2 = abs((x3 - x2)/v2);
        if(t1 == t2) cout << "Draw\n";
        else if (t1 < t2) cout << "Chef\n";
        else cout << "Kefa\n";
    }

    return 0; 
}

