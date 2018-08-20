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
 *      @created     : Sunday Aug 19, 2018 01:58:57 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    long t;
    cin >> t;
    while(t--) {
        long long n,k,e,m,temp;
        vector<long long> data;
        cin >> n >> k >> e >> m;
        for(int i = 0; i < n - 1; i++) {
            long long sum = 0;
            for(int j = 0; j < e; j++) {
                cin >> temp;
                sum += temp;
            }
            data.push_back(sum);
        }
        sort(data.begin(), data.end());
        long long maxScore = data[n-k-1];
        long long pscore = 0;
        for(int i = 0; i < e-1; i++) {
            cin >> temp;
            pscore += temp;
        }
        if(maxScore - pscore < 0) cout << 0 << endl;
        else if(maxScore - pscore + 1 > m) cout << "Impossible" << endl;
        else cout << maxScore - pscore + 1 << endl;
    }

    return 0;
}

