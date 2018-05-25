/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 17:09:33 IST
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

    cin >> n >> t;

    if(t == 10) {
        if(n == 1) cout << -1;
        else {
            for(int i = 0; i < n-1; i++) cout << 1;
            cout << 0;
        }
    } else {
        for(int i = 0; i < n; i++) cout << t;
    }
    cout << endl;

    return 0; 
}

