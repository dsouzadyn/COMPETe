/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 00:51:48 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> freq;
    if(s.length() < 26) cout << "NO" << endl;
    else {
        for(char c: s) {
            if(freq.size() == 26) break;
            freq.insert(tolower(c));
        }

        if(freq.size() == 26) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0; 
}

