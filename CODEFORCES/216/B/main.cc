/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 14, 2018 20:59:48 IST
 */

#include <bits/stdc++.h>

using namespace std;

int nodecount = 0;
bool visited[101];
enum status {CYCLE = 0, PATH = 1};

status dfs(vector<int> adj[], int s, int par) {
    if(visited[s]) return CYCLE;
    visited[s] = true;
    for(auto u: adj[s]) if(u != par) {
        ++nodecount;
        if(dfs(adj, u, s) == CYCLE) return CYCLE;
    }
    return PATH;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m;
    int u, v;
    memset(visited, 0, sizeof visited);

    cin >> n >> m;
    
    vector<int> adj[n+1];

    for(int i = 1; i <= m; i++) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int toRemove = 0;

    for(int i = 1; i <= n; i++) {
        if(!visited[i]){
            nodecount = 0;
            if(dfs(adj, i, -1) == CYCLE) toRemove += (nodecount % 2 == 1);
        }
    }

    toRemove += (n - toRemove) % 2;

    cout << toRemove << endl;

    return 0; 
}

