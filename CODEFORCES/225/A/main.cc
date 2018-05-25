/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 14:47:24 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, top;
    int left, right;
    bool faces[7];
    memset(faces, false, sizeof faces);
    cin >> n;
    cin >> top;
    cin >> left >> right;
    faces[left] = faces[right] = true;
    faces[abs(left - 7)] = faces[abs(right - 7)] = true;

    for(int i = 1; i < n; i++) {
        cin >> left >> right;
        if(!faces[left] || !faces[right] || !faces[abs(left-7)] || !faces[abs(right-7)]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0; 
}

