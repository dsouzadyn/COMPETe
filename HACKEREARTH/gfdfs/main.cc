#include <bits/stdc++.h>

using namespace std;

bool visited[1001] = {false};
static int dist[1001];

void dfs(vector<pair<int, int>> adj[], int s, int cost) {
    if(visited[s]) return;
    else {
        visited[s] = true;
        for(auto u: adj[s]) {
            dist[u.first] = cost + u.second;
            dfs(adj, u.first, cost + u.second);
        }
    }
}

int main(int argc, char *argv[])
{
    int N, u, v, Q;
    cin >> N;
    vector<pair<int, int>> adj[N+1];
    for(int i = 0; i < N-1; i++) {
        cin >> u >> v;
        adj[u].push_back({v, 1});
        adj[v].push_back({u, 1});
    }
    dfs(adj, 1, 0);
    int mindist = INT_MAX;
    int i;
    cin >> N;
    while(N--) {
        cin >> Q;
        cout << Q << endl;
        cout << Q << ":" << dist[Q] << endl;
        if(dist[Q] < mindist) {
            mindist = min(dist[Q], mindist);
            i = Q;
        }
    }
    cout << i << endl;
    return 0;
}
