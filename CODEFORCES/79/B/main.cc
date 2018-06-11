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
 *      @created     : Wednesday Jun 06, 2018 11:21:40 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m, k, t;

    cin >> n >> m >> k >> t;

    vector<pair<int, int>> waste;

    int u, v;

    for(int i = 0; i < k; i++) {
        cin >> u >> v;
        waste.push_back({u, v});
    }
    vector<string> fruits(4);
    fruits[1] = "Carrots";
    fruits[2] = "Kiwis";
    fruits[3] = "Grapes";
    sort(waste.begin(), waste.end());
    for(int i = 0; i < t; i++) {
        cin >> u >> v;
        if(find(waste.begin(), waste.end(), make_pair(u, v)) != waste.end()) {
            cout << "Waste" << endl;
        } else {
            int cnt = 0;
            for(auto &item: waste) {
                if(item.first < u && item.second < v) cnt += 1;
            }
            cout << (v-cnt) % 3 << endl;
            if((v-cnt) == 3) {
                cout << fruits[v-cnt] << endl;
            } else {
                cout << fruits[(max(v, cnt) - min(v, cnt) - 1) % 3] << endl;
            }
        }
    }

    return 0; 
}

