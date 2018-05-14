/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 00:54:01 IST
 */

#include <bits/stdc++.h>

using namespace std;

char grid[26][26];

bool visited[26][26];

bool valid(int x, int y, int n) {
    return x >= 0 && y >= 0 && x < n && y < n;
}

int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};

void dfs(int x, int y, int n) {
    if(visited[x][y]) return;
    visited[x][y] = true;
    for(int k = 0; k < 8; k++) {
        int i = dx[k] + x;
        int j = dy[k] + y;
        if(valid(i, j, n) && !visited[i][j] && grid[i][j] == '1') {
            dfs(i, j, n);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    
    int n;
    int t = 1;

    while(cin >> n) {
        for(int i = 0; i < n; i++) cin >> grid[i];
        memset(visited, 0, sizeof visited);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    ans += 1;
                    dfs(i, j, n);
                }
            }
        }
        cout << "Image number " << t++ << " contains " << ans << " war eagles.\n"; 
    }

    return 0; 
}

