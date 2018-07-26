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
 *      @created     : Wednesday Jun 13, 2018 17:22:05 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool valid(long x, long y, unordered_map<long, vector<pair<long, long>>> &segments) {
    if(segments.find(x) == segments.end()) return false;
    else {
        for(vector<pair<long, long>>::iterator it = segments[x].begin(); it != segments[x].end(); ++it) {
            if(y >= it->first && y <= it->second) return true;
        }
    }
    return false;
}

long dx[] = {1,-1,0,0,1,1,-1,-1};
long dy[] = {0,0,1,-1,1,-1,1,-1};

int bfs(long startx, long starty, long endx, long endy, unordered_map<long, vector<pair<long, long>>> &segments) {

    queue<pair<long, long>> qu;
    map<long, map<long, long>> dist;
    dist[startx][starty] = 0;
    qu.push(make_pair(startx, starty));
    
    while(!qu.empty()) {
        long ix = qu.front().first;
        long iy = qu.front().second;
        qu.pop();
        if(ix == endx && iy == endy) return dist[ix][iy];
        for(int i = 0; i < 8; i++) {
            int nx = ix + dx[i];
            int ny = iy + dy[i];
            if(!valid(nx, ny, segments)) continue;
            if(dist[nx].count(ny) <= 0) {
                dist[nx][ny] = dist[ix][iy] + 1;
                qu.push(make_pair(nx, ny));
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

    // Solution goes here

    long startx, starty;
    long endx, endy;

    cin >> startx >> starty >> endx >> endy;
    long n;
    long t, a, b;
    cin >> n;
    unordered_map<long, vector<pair<long, long>>> segments;
    for(int i = 0; i < n; i++) {
        cin >> t >> a >> b;
        segments[t].push_back(make_pair(a, b));
    }

    long answer = bfs(startx, starty, endx, endy, segments);

    cout << answer << endl;

    return 0; 
}

