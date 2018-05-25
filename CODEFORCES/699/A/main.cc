/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 12:38:30 IST
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
    string s;

    cin >> n;
    cin >> s;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    long long mint = LLONG_MAX;
    for(long i = 0; i < n-1; i++) {
        if(s[i] == 'R' && s[i+1] == 'L') {
            long long t = arr[i+1] - arr[i];
            mint = min(mint, t/2);
        }
    }

    if(mint != LLONG_MAX) cout << mint << endl;
    else cout << -1 << endl;

    return 0; 
}

