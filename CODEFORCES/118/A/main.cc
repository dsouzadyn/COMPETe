/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 17:18:58 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(char c: s) {
        if (!isVowel(c)) cout << '.' << c;
    }
    cout << endl;
    return 0; 
}

