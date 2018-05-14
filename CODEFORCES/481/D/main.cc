/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 16:02:02 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    cin >> n;

    map<int, int> freq;

    ll prev, t;
    cin >> prev;

    int min_freq = INT_MAX;

    int changes = 0;

    for(int i = 1; i < n; i++) {
        cin >> t;
        ll diff = t - prev;
        if(diff < 0) { cout << -1 << endl; return 0; }
        if(freq.find(diff) == freq.end()) freq[diff] = 1;
        else freq[diff] += 1;
        min_freq = min(min_freq, freq[diff]);
    }

    cout << min_freq << endl;

    return 0; 
}

