#include <bits/stdc++.h>

using namespace std;

int bfs(vector<int> g[], int x) {
    bool visited[50001] = {false};
    queue<int> q;
    q.push(1);
    int level[50001] = {0};
    level[1] = 1;
    visited[1] = true;
    int cnt = 0;
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        for(auto u: g[s]) {
            if(visited[u]) continue;
            visited[u] = true;
            level[u] = level[s] + 1;
            if (level[u] == x) cnt++;
            q.push(u);
        }
    }
    return cnt;
}

int main(int argc, char *argv[])
{
    int N, u, v;
    cin >> N;
    vector<int> g[N+1];
    N--;
    while(N--) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int q;
    cin >> q;
    cout << bfs(g, q) << endl;
    return 0;
}
