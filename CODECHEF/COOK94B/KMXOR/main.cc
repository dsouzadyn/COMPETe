/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 22:20:44 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t, k, n;
    cin >> t;

    while(t--) {
        cin >> n >> k;

        int cxor = 0;
        for(int i = 1; i <= k; i++ ) cxor ^= i;
        
        int mxor = cxor;
        for(int i = k; i <= n; i++) {
            cxor ^= i-k;
            cxor ^= i;
            mxor = max(mxor, cxor);
        }

        cout <<  mxor << endl;
    }

    return 0; 
}

