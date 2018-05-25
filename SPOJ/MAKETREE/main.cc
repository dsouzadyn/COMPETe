/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 11:53:37 IST
 */

#include <bits/stdc++.h>

using namespace std;

stack<int> stk;
bool visited[100001];
int level[100001] = {0};

void tsort(vector<int> adj[], int s) {
    if(visited[s]) return;
    visited[s] = true;
    for(auto u: adj[s]) {
        tsort(adj, u);
    }
    stk.push(s);
}

void dfs(vector<int> adj[], int s) {
    if(visited[s]) return;
    visited[s] = true;
    for(auto u: adj[s]) {
        cout << u << endl;
        level[u] = level[s] + 1;
        dfs(adj, u);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m, c;
    cin >> n >> m;
    memset(visited, 0, sizeof visited);
    int v;
    vector<int> adj[n+1];
    for(int i = 1; i <= m; i++) {
        cin >> c;
        while(c--) {
            cin >> v;
            adj[i].push_back(v);
        }
    }

    for(int i = 1; i <= n; i++) if(!visited[i]) tsort(adj, i);

    c = 0;
    int supp[n+1];
    while(!stk.empty()) {
        supp[stk.top()] = c;
        c = stk.top();
        stk.pop();
    }

    for(int i = 1; i <= n; i++) cout << supp[i] << "\n";

    return 0; 
}

