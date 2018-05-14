/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 16:01:06 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    multiset<ll> mset;
    cin >> n >> m;

    ll maxmoves = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        mset.insert(t);
    }
    vector<ll> q(m);
    for(int i = 0; i < m; i++) {
        cin >> q[i];
        maxmoves = max(q[i], maxmoves);
    }
    vector<ll> ans(maxmoves+1);
    for(int i = 0; i < maxmoves; i++) {
        multiset<ll>::iterator me = mset.end();
        me--;
        ll t = *me / 2;
        ans[i+1] = *me;
        mset.erase(me);
        if(t > 0)
            mset.insert(t);
    }

    for(int i = 0; i < m; i++) {
        cout << ans[q[i]] << endl;
    }

    return 0; 
}

