/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 20:21:45 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char c;
    string s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    cin >> c;
    cin >> s;

    if (c == 'R') {
        for(char i : s) {
            cout << key[key.find(i) - 1];
        }
    } else {
        for(char i : s) {
            cout << key[key.find(i) + 1];
        }
    }
    cout << endl;

    return 0; 
}

