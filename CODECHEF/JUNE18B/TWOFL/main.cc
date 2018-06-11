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
 *      @created     : Sunday Jun 10, 2018 21:04:53 IST
 */

#include <bits/stdc++.h>

using namespace std;
int m, n;
int grid[1001][1001];
bool visited[1001][1001];
bool valid(int i, int j) {
    return i >= 0 && j >= 0 && i < n && j < m;
}
int len = 0;

void dfs(int i, int j, pair<int, int> p) {
    if(!valid(i, j)) return;
    if(visited[i][j]) return;
    visited[i][j] = true;
    if((grid[i][j] != p.first) && (grid[i][j] != p.second)) return;
    if(grid[i][j] == p.first || grid[i][j] == p.second) len += 1;
    dfs(i, j+1, p);
    dfs(i, j-1, p);
    dfs(i+1, j, p);
    dfs(i-1, j, p);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    cin >> n >> m;

    unordered_set<int> uniques;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) { 
            cin >> grid[i][j];
            uniques.insert(grid[i][j]);
        }
    
    if(uniques.size() <= 2) {
        cout << n * m << endl;
        return 0;
    }

    int maxlen = INT_MIN;
    for(unordered_set<int>::iterator i = uniques.begin(); i != uniques.end(); ++i) {
        for(unordered_set<int>::iterator j = i; j != uniques.end(); ++j) {
            memset(visited, false, sizeof visited);
            for(int p = 0; p < n; p++) {
                for(int q = 0; q < m; q++) {
                    if(!visited[p][q] && ((grid[p][q] == *i) || (grid[p][q] == *j))) {
                        len = 0;
                        dfs(p, q, make_pair(*i, *j));
                        maxlen = max(maxlen, len);
                    }
                }
            }
        }
    }

    cout << maxlen << endl;

    return 0; 
}

