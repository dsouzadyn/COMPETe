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
 *      @created     : Wednesday May 23, 2018 12:28:44 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool visited[100];
bool recStack[100];

stack<int> stk;

void reset() {
    memset(visited, false, sizeof visited);
    memset(recStack, false, sizeof recStack);
}

void dfs(vector<int> adj[], int s) {
    if(visited[s]) return;
    visited[s] = true;
    for(auto u: adj[s]) {
        dfs(adj, u);
    }
    stk.push(s);
}

bool isCycle(vector<int> adj[], int s) {
    if(visited[s] == false) {
        visited[s] = true;
        recStack[s] = true;
        for(auto u: adj[s]) {
            if(!visited[u] && isCycle(adj, u)) return true;
            else if (recStack[u]) return true;
        }
    }
    recStack[s] = false;
    return false;
} 

bool detectCycle(vector<int> adj[]) {
    for(int i = 0; i < 3; i++)
        if(isCycle(adj, i)) return true;

    return false;
}

void tsort(vector<int> adj[]) {
    for(int i = 0; i < 3; i++) {
        if(!visited[i])
            dfs(adj, i);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    map<char, int> m;
    m['A'] = 0;
    m['B'] = 1;
    m['C'] = 2;
    map<int, char> rm;
    rm[0] = 'A';
    rm[1] = 'B';
    rm[2] = 'C';
    vector<int> adj[3];
    string s;
    for(int i = 0; i < 3; i++) {
        cin >> s;
        if(s[1] == '<') adj[m[s[2]]].push_back(m[s[0]]);
        else adj[m[s[0]]].push_back(m[s[2]]);
    }

    reset();
    if(detectCycle(adj)) {
        cout << "Impossible" << endl;
    } else {
        reset();
        tsort(adj);
        string answer = "";
        while(!stk.empty()) {
            answer = rm[stk.top()] + answer;
            stk.pop();
        }
        cout << answer << endl;
    }
    

    return 0; 
}

