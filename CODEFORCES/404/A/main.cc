/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 12:26:45 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    string s;
    set<char> diag;
    set<char> ext;
    bool isX = true;
    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < n; j++) {
            if(j != i && j != n - i - 1) {
                ext.insert(s[j]);
            }
        }
        diag.insert(s[i]);
        diag.insert(s[n-i-1]);
        if(s[i] != s[n-i-1]) isX = false;
    }
    if(ext.size() != 1) cout << "NO" << endl;
    else {
        if(ext.count(s[0]) == 0) {
            if(isX && diag.size() == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0; 
}

