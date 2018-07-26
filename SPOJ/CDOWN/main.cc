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
 *      @created     : Friday Jun 15, 2018 20:28:21 IST
 */

#include <bits/stdc++.h>

using namespace std;

stack<string> stk;
map<string, bool> visited;
void tsort(map<string, vector<string>> adj, string start) {
    if(visited.find(start) != visited.end()) return;
    visited[start] = true;
    for(auto u : adj[start]) {
        tsort(adj, u);
    }
    stk.push(start);
}

bool isConnected(map<string, vector<string>> adj, string x, string y) {
    visited.clear();
    if(x == y) return true;
    queue<string> qu;
    qu.push(x);
    visited[x] = true;
    while(!qu.empty()) {
        string startx = qu.front();
        qu.pop();
        for(auto u : adj[startx]) {
            if(u == y) return true;
            if(!visited[u]) {
                visited[u] = true;
                qu.push(u);
            }
        }
    }
    return false;
}

void bfs(map<string, vector<string>> adj, string start, int k) {
    queue<string> qu;
    map<int, vector<string>> lvl_map;
    map<string, bool> custom_vis;
    custom_vis[start] = true;
    map<string, int> lvl;
    lvl[start] = 0;
    lvl_map[0].push_back(start);
    qu.push(start);
    int max_lvl = INT_MIN;
    while(!qu.empty()) {
        string s = qu.front();
        qu.pop();
        for(auto u: adj[s]) {
            if(custom_vis.find(u) == custom_vis.end()) {
                lvl[u] = lvl[s] + 1;
                max_lvl = max(max_lvl, lvl[u]);
                lvl_map[lvl[u]].push_back(u);
                visited[u] = true;
                qu.push(u);
            }
        }
    }
    map<int, set<string>> top_connections;
    for(int i = 0; i <= max_lvl-k; i++) {
        for(auto v: lvl_map[i]) {
            visited.clear();
            int cnt = 0;
            for(auto u: lvl_map[i+k]) {
                if(isConnected(adj, v, u)) {
                    cnt += 1;
                }
            }
            top_connections[cnt].insert(v);
        }
    }
    int c = 1;
    for(map<int, set<string>>::reverse_iterator rit = top_connections.rbegin(); rit != top_connections.rend(); ++rit) {
        if(c > 3) break;
        if(rit->second.size() > 1 && rit == top_connections.rbegin()) {
            for(auto u: rit->second) {
                if(c > 3) break;
                cout << u << " " << rit->first << endl;
                c++;
            }
            c--;
        } else {
            for(auto u: rit->second) {
                cout << u << " " << rit->first << endl;
            }
        }
        c++;
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;
    int i = 1;

    cin >> t;
    

    while(t--) {
        int n, d, e;
        cin >> n >> d;
        string u, v;
        map<string, vector<string>> adj;
        visited.clear();
        for(int i = 0; i < n; i++) {
            cin >> u;
            cin >> e;
            while(e--) {
                cin >> v;
                adj[u].push_back(v);
            }
        }
        for(auto x: adj) {
            if(visited.find(x.first) == visited.end());
                tsort(adj, x.first);
        }
        cout << "Tree " << i << ": " << endl;
        bfs(adj, stk.top(), d);
        i++;
    }

    return 0; 
}

