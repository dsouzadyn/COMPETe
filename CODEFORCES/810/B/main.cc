/***
 *          ___           ___
 *         /\  \         /\  \                                     _____
 *         \:\  \        \:\  \                                   /::\  \       ___           ___
 *          \:\  \        \:\  \                                 /:/\:\  \     /\__\         /\__\
 *      _____\:\  \   ___  \:\  \   ___     ___   ___     ___   /:/ /::\__\   /:/__/        /:/  /
 *     /::::::::\__\ /\  \  \:\__\ /\  \   /\__\ /\  \   /\__\ /:/_/:/\:|__| /::\  \       /:/__/
 *     \:\~~\~~\/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \ /:/  / \:\/:/ /:/  / \/\:\  \__   /::\  \
 *      \:\  \        \:\  /:/  /   \:\  /:/  /   \:\  /:/  /   \::/_/:/  /   ~~\:\/\__\ /:/\:\  \
 *       \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /       \::/  / \/__\:\  \
 *        \:\__\        \::/  /       \::/  /       \::/  /       \::/  /        /:/  /       \:\__\
 *         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/
 *
 *      @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 *      @created     : Monday May 28, 2018 20:36:19 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, f;
    cin >> n >> f;
    long a, b;
    vector<pair<long long, long long>> data;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        data.push_back({a, b});
    }

    vector<pair<long long, long long>> dc(n);

    long long ans = 0;

    for(int i = 0; i < n; i++) {
        long long u = min(data[i].first, data[i].second);
        long long v = min(2*data[i].first, data[i].second);
        dc[i].first = v-u;
        dc[i].second = u;
    }

    sort(dc.begin(), dc.end(), greater<pair<long, long>>());

    for(int i = 0; i < n; i++) {
        if(i <= f-1) ans += (dc[i].first + dc[i].second);
        else ans += dc[i].second;
    }

    cout << ans << endl;

    return 0; 
}

