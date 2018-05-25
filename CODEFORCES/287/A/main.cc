/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 13:12:28 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char grid[4][4];

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> grid[i][j];
    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            int cnt = 0;
            if(grid[i][j] == '#') cnt++;
            if(grid[i][j+1] == '#') cnt++;
            if(grid[i+1][j] == '#') cnt++;
            if(grid[i+1][j+1] == '#') cnt++;
            if(cnt >= 3) {
                cout << "YES" << endl;
                return 0;
            }
            cnt = 0;
            if(grid[i][j] == '.') cnt++;
            if(grid[i][j+1] == '.') cnt++;
            if(grid[i+1][j] == '.') cnt++;
            if(grid[i+1][j+1] == '.') cnt++;
            if(cnt >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0; 
}

