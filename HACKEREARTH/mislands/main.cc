#include <bits/stdc++.h>

using namespace std;

int bfs(vector<int> adj[], int s, int n) {
    queue<int> q;
    q.push(s);
    bool visited[100005] = {false};
    int level[100005] = {0};
    level[s] = 0;
    visited[s] = true;
    while(!q.empty()) {
        int p = q.front();
        q.pop();
        for(int u: adj[p]) {
            if(visited[u]) continue;
            level[u] = level[p] + 1;
            q.push(u);
            visited[u] = true;
        }
    }
    return level[n];
}

int main(int argc, char *argv[])
{
    int n, m, t, u, v;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<int> adj[n+1];
        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << bfs(adj, 1, n) << endl;
    }
    return 0;
}
