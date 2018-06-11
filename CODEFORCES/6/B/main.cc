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
 *      @created     : Sunday May 27, 2018 12:13:26 IST
 */

#include <bits/stdc++.h>

using namespace std;

int n, m;

bool valid(int x, int y) {
    return x < n && y < m && x >= 0 && y >= 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char boss;


    cin >> n >> m >> boss;
    vector<string> grid(n);
    for(int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    set<char> desks;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] != '.' && grid[i][j] != boss) {
                if(valid(i, j-1) && grid[i][j-1] == boss)
                    desks.insert(grid[i][j]);
                else if(valid(i, j+1) && grid[i][j+1] == boss)
                    desks.insert(grid[i][j]);
                else if(valid(i-1, j) && grid[i-1][j] == boss)
                    desks.insert(grid[i][j]);
                else if(valid(i+1, j) && grid[i+1][j] == boss)
                    desks.insert(grid[i][j]);
            }
        }
    }

    cout << desks.size() << endl;

    return 0; 
}

