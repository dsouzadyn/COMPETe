/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 13:24:54 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    set<int> levels;

    int n, t, x, y;
    cin >> n;

    cin >> x;
    while(x--) {
        cin >> t;
        levels.insert(t);
    }

    cin >> y;
    while(y--) {
        cin >> t;
        levels.insert(t);
    }

    if(levels.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0; 
}

