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
 *      @created     : Tuesday April 20, 2021 23:54:22 IST
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int t;
    cin >> t;
    while (t--) {
        string s;
        int n, m;
        cin >> n >> m >> s;
        vector<int> a(26,0);
        vector<int> prefix_sum(n,0);
        int idx = 0;
        for(int i = 0; i < m; i++) {
            int c;
            cin >> c;
            c--;
            prefix_sum[c]++;
        }
        for(int i = n - 1; i > 0; i--) {
            prefix_sum[i - 1] += prefix_sum[i];
        }
        for(int i = 0; i < n; i++) {
            a[s[i] - 'a'] += (prefix_sum[i] + 1);
        }
        for (auto u: a) cout << u << " ";
        cout << endl;
    }

    return 0;
}