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
 *      @created     : Monday Jun 11, 2018 19:34:07 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool is_win(string state) {
    bool is_full = true;
    for(int i = 0; i < 9; i++) {
        if(state[i] == '.') { is_full = false; break;}
    }
    if(is_full) {
        return true;
    }
    if(state[0] != '.' && state[0] == state[4] && state[4] == state[8])
        return true;
    else if (state[2] != '.' && state[2] == state[4] && state[4] == state[6])
        return true;
    else {
        for(int i = 0; i < 3; i++) {
            if(state[i*3 + 0] != '.' && state[i*3 + 0] == state[i*3 + 1] && state[i*3 + 1] == state[i*3 + 2])
                return true;
        }
        for(int i = 0; i < 3; i++) {
            if(state[0*3 + i] != '.' && state[0*3 + i] == state[1*3 + i] && state[1*3 + i] == state[2*3 + i])
                return true;
        }
    }
    return false;
}

void precalculate(set<string> &valid) {
    string state = ".........";
    queue<pair<string, bool>> bfs_qu;
    bfs_qu.push(make_pair(state, 1));
    while(!bfs_qu.empty()) {
        string current_state = bfs_qu.front().first;
        bool current_turn = bfs_qu.front().second;
        bfs_qu.pop();
        if(is_win(current_state)) continue;

        for(int i = 0; i < 9; i++) {
            if(current_state[i] == '.') {
                current_state[i] = (current_turn ? 'X' : 'O');
                if(valid.find(current_state) == valid.end()) {
                    valid.insert(current_state);
                    bfs_qu.push(make_pair(current_state, 1 ^ current_turn));
                }
                current_state[i] = '.';
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string s;
    set<string> states;
    precalculate(states);
    while(true) {
        cin >> s;
        if(s == "end") break;
        if(states.find(s) != states.end() && is_win(s))
            cout << "valid" << endl;
        else
            cout << "invalid" << endl;

    }

    return 0; 
}

