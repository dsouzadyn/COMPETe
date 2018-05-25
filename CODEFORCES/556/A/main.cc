/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 17:33:27 IST
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
    int zc = 0;
    int oc = 0;

    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') zc += 1;
        else oc += 1;
    }
    cout << max(oc, zc) - min(oc, zc) << endl;
    return 0; 
}

