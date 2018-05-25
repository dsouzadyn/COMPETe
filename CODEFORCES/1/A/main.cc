/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 13:28:57 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    unsigned long long int n, m, a;

    cin >> n >> m >> a;
    unsigned long long int ans = ceil((n+a-1)/a) * ceil((m+a-1)/a);

    cout << ans << endl;

    return 0; 
}

