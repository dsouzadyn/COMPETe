/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 00:41:57 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n;
    int x = 0;
    while(n--) {
        cin >> s;
        if(s == "X++" || s == "++X") x += 1;
        else x -= 1;
    }

    cout << x << endl;

    return 0; 
}

