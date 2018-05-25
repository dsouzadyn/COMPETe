/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 13:03:59 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, k;
    int a, b;
    int total = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        total += (b-a+1);
    }
    if(total % k == 0) cout << 0 << endl;
    else cout << k - (total % k) << endl;

    return 0; 
}

