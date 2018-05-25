/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 23:12:31 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string s;

    cin >> s;

    int q;

    cin >> q;

    unsigned long long int a, b;

    int len = s.length();

    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        if(s[(a-1) % len] == s[(b-1) % len]) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0; 
}

