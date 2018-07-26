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
 *      @created     : Saturday Jul 07, 2018 18:48:39 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("tourist.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    int t;
    cin >> t;
    int k, n;
    long long v;

    long long ptr;
    int casen = 1;
    while(t--) {
        cin >> n >> k >> v;
        ptr = (k * v) % 4;
        string s;
        vector<pair<string, int>> arr;
        for(int i = 0; i < n; i++) {
            cin >> s;
            arr.push_back(make_pair(s, i));
        }
        ptr--;
        if(ptr < 0) ptr = n - 1;
        map<int, string> data;
        for(int c = 0; c < k; c++) {
            if(ptr < 0) ptr = n - 1;
            data[arr[ptr].second] = arr[ptr].first;
            ptr--;
        }
        cout << "Case #" << casen << ": ";
        for(auto &item: data) {
            cout << item.second << " ";
        }
        cout << endl;
        casen += 1;
    }

    return 0;
}

