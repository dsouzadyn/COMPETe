/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 12:37:58 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool visited[101];
stack<int> stk;

void tsort(vector<int> adj[], int s) {
    if(visited[s]) return;
    visited[s] = true;
    for(auto u: adj[s]) tsort(adj, u);
    stk.push(s);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m;
    cin >> n;

    int u, v;
    while(n != 0) {
        vector<int> adj[n+1];
        memset(visited, 0, sizeof visited);
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) tsort(adj, i);
        }

        while(stk.size() > 1) {
            cout << stk.top() << " ";
            stk.pop();
        }
        cout << stk.top() << "\n";
        stk.pop();
        cin >> n;
    }

    return 0; 
}

