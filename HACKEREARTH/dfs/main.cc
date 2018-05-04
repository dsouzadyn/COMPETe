#include <bits/stdc++.h>

using namespace std;

bool visited[100001] = {false};

void dfs(vector<int> adj[], int s) {
    if(visited[s] == true) return;
    else {
        visited[s] = true;
        for(auto u: adj[s]) {
            dfs(adj, u);
        }
    }
}

int main(int argc, char *argv[])
{
    int N, M, u, v, q;
    cin >> N >> M;
    vector<int> adj[N+1];
    for(int i = 0; i < M; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> q;
    dfs(adj, q);
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        if(!visited[i]) sum++;
    }
    cout << sum << endl;
    return 0;
}
