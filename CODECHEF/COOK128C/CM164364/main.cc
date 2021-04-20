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
 *      @created     : Sunday April 18, 2021 21:46:32 IST
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
        int n, x;
        cin >> n >> x;
        map<int, int> freq;
        for(int i = 0; i < n; i++) {
            int c;
            cin >> c;
            freq[c]++;
        }
        int tx = x;

        while (x > 0) {
            for(auto &u : freq) {
                if (u.second >= 0) {
                    u.second--;
                    x--;
                }
                if (x == 0) break;
            }
        }

        int count = 0;
        for (auto u: freq) {
            if (u.second >= 1) count++;
        }
        cout << count << endl;
        
    }

    return 0;
}