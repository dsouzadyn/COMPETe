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
 *      @created     : Friday Aug 17, 2018 19:08:23 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int a, b;
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> z;
    vector<pair<int, int>> x;

    for(int i = 0; i < p; i++) {
        cin >> a >> b;
        z.push_back(make_pair(a,b));
    }

    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        x.push_back(make_pair(a,b));
    }

    int sum = 0;

    for(int t = l; t <= r; t++) {
        for(int i = 0; i < z.size(); i++) {
            for(int j = 0; j < x.size(); j++) {

            }
        }
    }

    cout << sum << endl;

    return 0;
}

