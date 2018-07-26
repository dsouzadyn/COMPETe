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
 *      @created     : Tuesday Jun 12, 2018 13:39:17 IST
 */

#include <bits/stdc++.h>

using namespace std;

int dx[] = {1,1,-1,-1,2,2,-2,-2};
int dy[] = {2,-2,2,-2,1,-1,1,-1};

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int BFS(int sr, int sc, int dr, int dc) {
    int distance[10][10];
    memset(distance, -1, sizeof distance);
    queue<pair<int, int>> qu;
    qu.push(make_pair(sr, sc));
    distance[sr][sc] = 0;
    while(!qu.empty()) {
        int tr = qu.front().first;
        int tc = qu.front().second;
        qu.pop();
        if(tr == dr && tc == dc) return distance[tr][tc];
        for(int k = 0; k < 8; k++) {
            int newr = tr + dx[k];
            int newc = tc + dy[k];
            if(!valid(newr, newc)) continue;
            if(distance[newr][newc] == -1) {
                distance[newr][newc] = distance[tr][tc] + 1;
                qu.push(make_pair(newr, newc));
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char source[5], destination[5];

    while(cin >> source >> destination) {
        int moves = BFS(source[1] - '1', source[0] - 'a', destination[1] - '1', destination[0] - 'a');
        cout << "To get from " << source << " to " << destination << " takes " << moves << " knight moves." << endl;
    }

    return 0; 
}

