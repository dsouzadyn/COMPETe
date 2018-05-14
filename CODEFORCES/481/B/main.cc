/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 14:49:21 IST
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
    string s;
    cin >> n;
    cin >> s;

    int sum = 0;
    for(int i = 2; i < n; i++) {
        if(s[i] == s[i-1] && s[i] == s[i-2] && s[i] == 'x') sum += 1;
    }

    cout << sum << endl;

    return 0; 
}

