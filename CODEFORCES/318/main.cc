/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 16:31:36 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    ll n, k;

    cin >> n >> k;

    if(n % 2 == 0) {
        if( k > n/2) cout << (k - (n/2)) * 2 << endl;
        else cout << k * 2 - 1;
    } else {
        if( k > n/2 + 1) cout << (k - (n/2 +1)) * 2 << endl;
        else cout << k * 2 - 1;
    }

    return 0; 
}

