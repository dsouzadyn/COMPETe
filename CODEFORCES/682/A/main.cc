/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 15:38:56 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    long long n, m;
    cin >> n >> m;

    static long long freq1[5];
    static long long freq2[5];

    for(int i = 1; i <= n; i++) freq1[i % 5]++;
    for(int i = 1; i <= m; i++) freq2[i % 5]++;

    long long ans = 0;
    for(int i = 0; i < 5; i++) ans += freq1[i]*freq2[(5-i) % 5];

    cout << ans << endl;

    return 0; 
}

