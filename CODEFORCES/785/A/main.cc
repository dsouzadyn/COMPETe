/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 13:51:34 IST
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
    map<string, int> shapes;
    shapes["Tetrahedron"] = 4;
    shapes["Cube"] = 6;
    shapes["Octahedron"] = 8;
    shapes["Dodecahedron"] = 12;
    shapes["Icosahedron"] = 20;

    long n;
    cin >> n;
    long sum = 0;
    while(n--) {
        cin >> s;
        sum += shapes[s];
    }

    cout << sum << endl;

    return 0; 
}

