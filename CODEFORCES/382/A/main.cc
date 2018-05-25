/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 12:11:38 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string a, b;
    int lenl, lenr;
    cin >> a;
    cin >> b;

    lenl = a.find('|');
    lenr = a.length()-1 - lenl;
    int c = 0;
    string l = "", r = "";
    while(c != b.length()) {
        if(lenl < lenr) {
            lenl++;
            l += b[c++];;
        } else {
            lenr++;
            r += b[c++];
        }
    }

    if(lenl == lenr) cout << l << a << r << endl;
    else cout << "Impossible" << endl;

    return 0; 
}

