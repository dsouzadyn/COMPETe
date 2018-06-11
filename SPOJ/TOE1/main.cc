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
 *      @created     : Monday Jun 11, 2018 14:06:28 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool is_win(string c) {
    bool rows = 
        (c[0] != '.' && c[0] == c[1] && c[1] == c[2]) || 
        (c[3] != '.' && c[3] == c[4] && c[4] == c[5]) ||
        (c[6] != '.' && c[6] == c[7] && c[7] == c[8]);
    bool columns =
        (c[0] != '.' && c[0] == c[3] && c[3] == c[6]) ||
        (c[1] != '.' && c[1] == c[4] && c[4] == c[7]) ||
        (c[2] != '.' && c[2] == c[5] && c[5] == c[8]);
    bool diagonals = 
        (c[0] != '.' && c[0] == c[4] && c[4] == c[8]) ||
        (c[2] != '.' && c[2] == c[4] && c[4] == c[6]);

    return rows || columns || diagonals;
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
        string board = "";
        for(int i = 0; i < 3; i++) {
            string row;
            cin >> row;
            board += row;
        }

        string start = ".........";

        queue<pair<string, bool>> qu;
        qu.push(make_pair(start, 1));

        string ans = "no";

        while(!qu.empty()) {
            string curr = qu.front().first;
            bool curr_player = qu.front().second;
            qu.pop();

            if(curr == board) {
                ans = "yes";
                break;
            }
            if(is_win(curr)) continue;
            for(int i = 0; i < 9; i++) {
                if(curr[i] == '.') {
                    curr[i] = (curr_player ? 'X' : 'O');
                    if(curr[i] == board[i])
                        qu.push(make_pair(curr, 1 ^ curr_player));
                    cout << curr << endl;
                    curr[i] = '.';
                }
            }
        }
        cout << ans << endl;
    }

    return 0; 
}

