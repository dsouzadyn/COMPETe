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
 *      @author      : dylan (dylan@skynet)
 *      @created     : Friday Aug 10, 2018 20:48:16 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int p, q, t;
    cin >> p >> q;
    vector<pair<int, int>> arr(q);
    vector<pair<int, int>> diff;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> t;
            arr[j].first = t;
        }
        for(int j = 0; j < q; j++) {
            cin >> t;
            arr[j].second = t;
        }
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for(int c = 0; c < q - 1; c++) {
            if(arr[c].second > arr[c+1].second) cnt += 1;
        }
        diff.push_back(make_pair(cnt, i));
    }

    sort(diff.begin(), diff.end());

    for(auto x: diff) {
        cout << x.second + 1 << endl;
    }

    return 0;
}

