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
 *      @created     : Friday May 25, 2018 23:33:49 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool visited[1005][1005];
char direction[1005][1005];

int n, m;

bool valid(int x, int y) {
    return x < n && y < m && x >= 0 && y >= 0;
}

bool found;

void dfs(int x, int y, int mx, int my) {
    if(visited[x][y] || !valid(x, y)) return;
    visited[x][y] = true;
    if(x == mx && y == my) {
        if(!visited[x][y+1] && valid(x, y+1))
            cout << "Right" << endl;
        else if (!visited[x][y-1] && valid(x, y-1)) 
            cout << "Left" << endl;
        else if(!visited[x-1][y] && valid(x-1, y))
            cout << "Front" << endl;
        else if(!visited[x+1][y] && valid(x+1, y))
            cout << "Back" << endl;
        else cout << "Over" << endl;
        found = true;
        return;
    }
    if(!found) {
        dfs(x, y+1, mx, my);
        dfs(x, y-1, mx, my);
        dfs(x - 1, y, mx, my);
        dfs(x + 1, y, mx, my);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    memset(visited, false, sizeof visited);

    int t;
    cin >> t;
    while(t--) {
        int x, y, mx, my;
        cin >> n >> m;
        memset(visited, 0, sizeof visited);
        cin >> x >> y;
        cin >> mx >> my;
        --x, --y;
        --mx, --my;
        found = false;
        dfs(x, y, mx, my);
    }

    return 0; 
}

