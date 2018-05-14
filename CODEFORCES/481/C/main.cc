/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 15:12:48 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    ull n, m;
    cin >> n >> m;

    vector<ull> dorm(n);
    vector<ull> dorm_sum(n);

    ull sum = 0;
    ull t;
    for(int i = 0; i < n; i++) {
        cin >> t;
        sum += t;
        dorm_sum[i] = sum;
        dorm[i] = t;
    }

    ull q;
    for(int i = 0; i < m; i++) {
        cin >> q;
        auto const it = lower_bound(dorm_sum.begin(), dorm_sum.end(), q);
        int idx = it - dorm_sum.begin();
        cout << idx + 1 << " " << dorm[idx] - (dorm_sum[idx] - q) << "\n";
    }

    return 0; 
}

