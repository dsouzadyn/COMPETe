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
 *      @created     : Sunday May 27, 2018 23:38:38 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;
    long n, k, q;

    cin >> t;
    while(t--) {
        cin >> n >> k >> q;
        int cnt = 0;
        long tempi;
        bool is = false;
        vector<long> arr(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        vector<long> minset;
        long minval = LONG_MAX;
        for(int i = 1; i <= n; i++) {
            minval = min(minval, arr[i]);
            if(i % (n/k) == 0) {
                minset.push_back(minval);
                minval = LONG_MAX;
            }
        }
        sort(minset.begin(), minset.end());
        if(minset[0] < q && minset[0] != q)
            cout << minset[0] << endl;
        else cout << "NO" << endl;
    }

    return 0; 
}

