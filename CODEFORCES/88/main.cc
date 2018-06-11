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
 *      @created     : Thursday May 31, 2018 13:43:33 IST
 */

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

double dist(pair<int, int> a, pair<int, int> b) {
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m, x;

    cin >> n >> m >> x;

    unordered_map<char, vector<pair<int, int>>> grid;
    char t;
    vector<pair<int, int>> shifts;
    unordered_set<char> dict;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> t;
            if(t == 'S') shifts.push_back({i, j});
            else {
                grid[t].push_back({i, j});
                dict.insert(t);
            }
        }
    }
    int q;
    cin >> q;
    char c;
    int cnt = 0;

    double mdist;
    map<char, int> sit;
    for(char z = 'a'; z <= 'z'; z++) {
        mdist = x+1;
        if(grid.find(z) == grid.end()) {
            sit[z] = -1;
        } else {
            if(shifts.size() == 0) sit[toupper(z)] = -1;
            else {
                for(auto &item: shifts) {
                    for(auto &i2: grid[z]) {
                        mdist = min(mdist, dist(item, i2));
                    }
                }
                if(mdist <= x) sit[toupper(z)] = 0;
                else sit[toupper(z)] = 1;
            }
        }
    }

    while(q--) {
        cin >> c;
        if(isupper(c)) {
            if(grid.find(tolower(c)) == grid.end()) {
                cout << -1 << endl;
                return 0;
            }
            if(sit[toupper(c)] != -1) {
                cnt += sit[toupper(c)];
            } else {
                cout << -1 << endl;
                return 0;
            }
        } else {
            if(sit[c] == -1) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << cnt << endl;

    return 0; 
}

