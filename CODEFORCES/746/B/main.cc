/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 21, 2018 17:34:37 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string s, t = "";
    int n;
    cin >> n;
    cin >> s;
    if(n <= 2) cout << s << endl;
    else {
        t = s[0];
        if(n % 2 != 0) {
            for(int i = 1; i < s.size(); i++) {
                if(i % 2 == 0) t = t + s[i];
                else t = s[i] + t;
            }
        } else {
            for(int i = 1; i < s.size(); i++) {
                if(i % 2 == 0) t = s[i] + t;
                else t = t + s[i];
            }
        }
        cout << t << endl;
    }

    return 0; 
}

