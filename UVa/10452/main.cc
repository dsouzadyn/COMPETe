/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 14:29:23 IST
 */

#include <bits/stdc++.h>

using namespace std;

char grid[10][10];
char s[10] = "@IEHOVA#";
char p[10];
int n, m;

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

void dfs(int x, int y, int l) {
    if(!valid(x, y)) return;
    if(grid[x][y] != s[l]) return;
    if(grid[x][y] == '#') {
        for(int i = 0; i < l; i++) {
            if(i) cout << ' ';
            if(p[i] == 'F') cout << "forth";
            else if (p[i] == 'L') cout << "left";
            else cout << "right";
        }
        return;
    }
    p[l] = 'L';
    dfs(x, y-1, l+1);
    p[l] = 'R';
    dfs(x, y+1, l+1);
    p[l] = 'F';
    dfs(x-1, y, l+1);
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t;
    cin >> t;

    while(t--) {
        cin >> n >> m;

        for(int i = 0; i < n; i++) cin >> grid[i];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] == '@') dfs(i, j, 0);
        cout << endl;
    }
    return 0; 
}

