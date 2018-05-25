/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 21, 2018 20:54:06 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> data;

    ll a, b;

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        data.push_back({b, a});
    }
    ll sum = 0;
    stable_sort(data.begin(), data.end());
    for(vector<pair<ll, ll>>::reverse_iterator it = data.rbegin(); it != data.rend(); ++it) {
        if(n > 0) {
            if(n > it->second) {
                sum += (it->second) * (it->first);
                n -= it->second;
            } else {
                sum += n * (it->first);
                n -= n;
            }
        } else {
            break;
        }
    }

    cout << sum << endl;

    return 0; 
}

