/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 22:25:27 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, t;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> t;
        if((360 % (180 - t)) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0; 
}

