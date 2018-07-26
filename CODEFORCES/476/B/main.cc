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
 *      @created     : Monday Jun 18, 2018 13:44:13 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool isvalid(string a, string b) {
    int aplus = count(a.begin(), a.end(), '+');
    int aneg = a.length() - aplus;
    int bplus = count(b.begin(), b.end(), '+');
    int bneg = b.length() - bplus;
    return ((aplus == bplus) && (aneg == bneg));
}

double bfs(string a, string b) {
    int total = count(a.begin(), a.end(), '+') + count(a.begin(), a.end(), '-');
    queue<pair<string, bool>> qu;
    qu.push(make_pair(b, 1));
    unordered_set<string> configs;
    unordered_set<string> full;
    while(!qu.empty()) {
        string currents = qu.front().first;
        string currentsneg = qu.front().first;
        bool turn = qu.front().second;
        qu.pop();
        int ctotal = count(currents.begin(), currents.end(), '+') + count(currents.begin(), currents.end(), '-');
        if(ctotal == total) { continue; }
        for(int i = 0; i < (int)b.length(); i++) {
            if(currents[i] == '?') {
                currents[i] = (turn ? '+' : '-');
                currentsneg[i] = (turn ? '-' : '+');
                if(configs.find(currents) == configs.end()) {
                    configs.insert(currents);
                    qu.push(make_pair(currents, 1^turn));
                }
                if(configs.find(currentsneg) == configs.end()) {
                    configs.insert(currentsneg);
                    qu.push(make_pair(currentsneg, 1^turn));
                }
                if(count(currents.begin(), currents.end(), '?') == 0)
                    full.insert(currents);
                if(count(currentsneg.begin(), currentsneg.end(), '?') == 0)
                    full.insert(currentsneg);
                currents[i] = '?';
                currentsneg[i] = '?';
            }
        }
    }

    double valid = 0;
    for(auto u: full) {
        if(isvalid(a, u)) valid = valid + 1;
    }
    return (valid /  full.size());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(10);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string a, b;
    cin >> a;
    cin >> b;

    if(count(b.begin(), b.end(), '?') == 0) {
        int aplus = count(a.begin(), a.end(), '+');
        int aneg = a.length() - aplus;
        int bplus = count(b.begin(), b.end(), '+');
        int bneg = b.length() - bplus;
        if((aplus == bplus) && (aneg == bneg)) {
            cout << 1.0d << endl;
        } else {
            cout << 0.0d << endl;
        }
    } else {
       double ans = bfs(a, b);
       cout << ans << endl;
    }

    return 0; 
}

