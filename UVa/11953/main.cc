/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 21:07:54 IST
 */

#include <bits/stdc++.h>

using namespace std;

int n, sunken;
char grid[101][101];
bool visited[101][101];

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < n;
}

void dfs(int x, int y) {
    if(!valid(x, y)) return;
    if(visited[x][y]) return;
    if(grid[x][y] == '.') return;
    visited[x][y] = true;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int cases = 0, i, j;
    int g;
    cin >> g;
    while(cin >> n) {
        for(int i = 0; i < n; i++) cin >> grid[i];
        int res = 0;
        memset(visited, 0, sizeof visited);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 'x' && !visited[i][j]) {
                    res += 1;
                    dfs(i, j);
                }
        cout << "Case " << ++cases << ": " << res << endl;
    }

    return 0; 
}

