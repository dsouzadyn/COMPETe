/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 19:23:46 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool isColored(char c) {
    return c == 'C' || c == 'M' || c == 'Y';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m;
    set<char> colors;

    cin >> n >> m;
    char t;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> t;
            if(isColored(t)) {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }

    cout << "#Black&White" << endl;

    return 0; 
}

