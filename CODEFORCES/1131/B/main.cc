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
 *      @created     : Sunday April 18, 2021 20:55:46 IST
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
    int n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> a(n);
        vector<bool> pos(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) {
            int p;
            cin >> p;
            p--;
            pos[p] = true;
        }

        while (true) {
            bool ok = false;
            for(int i = 0; i < n; i++) {
                if (pos[i] && a[i] > a[i+1]) {
                    ok = true;
                    swap(a[i], a[i+1]);
                }
            }
            if (!ok) break;
        }

        bool check_asc = true;
        for(int i = 0; i < n - 1; i++) check_asc &= (a[i] <= a[i+1]);
        if (check_asc) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    
    return 0;
}