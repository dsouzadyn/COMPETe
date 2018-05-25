/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 18:29:14 IST
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
    cin >> n;
    map<int, int> freq;
    int max_freq = INT_MIN;

    for(int i = 0; i < n; i++) {
        cin >> t;
        if(freq.find(t) == freq.end()) freq[t] = 1;
        else freq[t] += 1;
        max_freq = max(max_freq, freq[t]);
    }

    int half = ceil(n/2.0); 
    if(max_freq <= half)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0; 
}

