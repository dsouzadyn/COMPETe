/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 00:45:03 IST
 */

#include <bits/stdc++.h>

using namespace std;

double dist(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(9);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    // Solution goes here
    int n, k;
    cin >> n >> k;

    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    double total_dist = 0.0000000f;

    for(int i = 1; i < n; i++) {
        cin >> x2 >> y2;
        total_dist += dist(x1, x2, y1, y2);
        x1 = x2;
        y1 = y2;
    }
    total_dist *= k;
    total_dist = total_dist / 50;
    cout << total_dist << endl;
    return 0; 
}

