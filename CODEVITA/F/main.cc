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
 *      @created     : Saturday Jul 21, 2018 13:12:51 IST
 */

#include <bits/stdc++.h>

using namespace std;

int m, n;
int c;

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x <= n && y <= m;
}

void dfs(int sx, int sy, int tx, int ty, int len, int steps) {
    if(!valid(sx, sy)) return;
    // cout << steps << endl;
    // if(steps > len) return;
    if(len == steps) {
        cout<< steps << ": " << sx << ", " << sy << endl;

        if(sx == tx && sy == ty) {
            c += 1;
        }
        return;
    }
    dfs(sx-1, sy, tx, ty, len, steps + 1);
    dfs(sx+1, sy, tx, ty, len, steps + 1);
    dfs(sx, sy - 1, tx, ty, len, steps + 1);
    dfs(sx, sy + 1, tx, ty, len, steps + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //#ifndef ONLINE_JUDGE
    //freopen("in.txt", "rt", stdin);
    //#endif

    string s;
    cin >> s;
    stringstream ss(s);
    ss >> m;
    ss.ignore();
    ss >> n;
    int len;
    ss.ignore();
    ss >> len;
    ss.ignore();
    cout << n << " " << m << endl;
    cin >> s;
    ss = stringstream(s);
    int sx, sy;
    int tx, ty;

    ss.ignore();
    ss >> sx;
    ss.ignore();
    ss >> sy;
    ss.ignore();
    ss >> tx;
    ss.ignore();
    ss >> ty;
    ss.ignore();
    c = 0;
    dfs(sx, sy, tx, ty, len, 1);

    cout << c << endl;

    return 0;
}

