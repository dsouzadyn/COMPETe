/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 13:36:33 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> p(n, 0);
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++) {
        ll mindist = LLONG_MAX;
        ll maxdist = LLONG_MIN;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                ll dist = abs(p[j] - p[i]);
                mindist = min(mindist, dist);
                maxdist = max(maxdist, dist);
            }
        }
        cout << mindist << " " << maxdist << "\n";
    }

    return 0; 
}

