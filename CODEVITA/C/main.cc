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
 *      @created     : Thursday Aug 09, 2018 21:55:16 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int grid[n][m];
        int new_grid[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        int ui, uj;
        int ii, ij;
        int g;
        cin >> ui >> ii;
        cin >> uj >> ij;
        cin >> g;
        for(int i = 1; i <= g; i++) {
            if(i % 2 != 0) {
                for(int p = 0; p < n; p++) {
                    for(int q = 0; q < m; q++) {
                        int c = 0;
                        if(grid[p][q] == 1) {
                            for(int dx = -1; dx <= 1; dx++) {
                                for(int dy = -1; dy <= 1; dy++) {
                                    if(dx != 0 && dy != 0) {
                                        if(grid[p + dx][q + dy] == 0) c += 1;
                                    }
                                }
                            }
                            if(c >= ui && c <= uj) new_grid[p][q] = 0;
                            else new_grid[p][q] = grid[p][q];
                        } else {
                            for(int dx = -1; dx <= 1; dx++) {
                                for(int dy = -1; dy <= 1; dy++) {
                                    if(dx != 0 && dy != 0) {
                                        if(grid[p + dx][q + dy] == 1) c += 1;
                                    }
                                }
                            }
                            if(c >= ii && c <= ij) new_grid[p][q] = 1;
                            else new_grid[p][q] = grid[p][q];
                        }
                    }
                }
            } else {
                for(int p = 0; p < n; p++) {
                    for(int q = 0; q < m; q++) {
                        int c = 0;
                        if(new_grid[p][q] == 1) {
                            for(int dx = -1; dx <= 1; dx++) {
                                for(int dy = -1; dy <= 1; dy++) {
                                    if(dx != 0 && dy != 0) {
                                        if(new_grid[p + dx][q + dy] == 0) c += 1;
                                    }
                                }
                            }
                            if(c >= ui && c <= uj) grid[p][q] = 0;
                            else grid[p][q] = new_grid[p][q];
                        } else {
                            for(int dx = -1; dx <= 1; dx++) {
                                for(int dy = -1; dy <= 1; dy++) {
                                    if(dx != 0 && dy != 0) {
                                        if(new_grid[p + dx][q + dy] == 1) c += 1;
                                    }
                                }
                            }
                            if(c >= ii && c <= ij) grid[p][q] = 1;
                            else grid[p][q] = new_grid[p][q];
                        }
                    }
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(g % 2 == 0) cout << grid[i][j] <<" ";
                else cout << new_grid[i][j];
            }
            cout << endl;
        }

    }

    return 0;
}

