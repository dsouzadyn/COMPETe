/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 18:21:50 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    long n;
    int cnt = 0;
    cin >> n;
    while(n) {
        if(n & 1) cnt += 1;
        n >>= 1;
    }

    cout << cnt << endl;

    return 0; 
}

