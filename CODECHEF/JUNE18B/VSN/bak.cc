/***
 *          ___           ___
 *         /\  \         /\  \                                     _____
 *         \:\  \        \:\  \                                   /::\  \       ___           ___
 *          \:\  \        \:\  \                                 /:/\:\  \     /\__\         /\__\
 *      _____\:\  \   ___  \:\  \   ___     ___   ___     ___   /:/ /::\__\   /:/__/        /:/  /
 *     /::::::::\__\ /\  \  \:\__\ /\  \   /\__\ /\  \   /\__\ /:/_/:/\:|__| /::\  \       /:/__/
 *     \:\~~\~~\/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \ /:/  / \:\/:/ /:/  / \/\:\  \__   /::\  \
 *      \:\  \        \:\  /:/  /   \:\  /:/  /   \:\  /:/  /   \::/_/:/  /   ~~\:\/\__\ /:/\:\  \
 *       \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /       \::/  / \/__\:\  \
 *        \:\__\        \::/  /       \::/  /       \::/  /       \::/  /        /:/  /       \:\__\
 *         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/
 *
 *      @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 *      @created     : Saturday Jun 09, 2018 23:02:02 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef struct {double x; double y; double z;} Point;

double scalar(Point a, Point b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Point sub(Point a, Point b) {
    Point t;
    t.x = a.x - b.x;
    t.y = a.y - b.y;
    t.z = a.z - b.z;
    return t;
}

double compute(Point P, Point Q, Point d, Point C, double r) {
    double C2 = pow(C.x - P.x - C.y + P.y, 2)
        + pow(C.x - P.x - C.z + P.z, 2)
        + pow(C.y - P.y - C.z + P.z, 2) - 3 * r * r;
    double C1 = 2*r*r*(P.x - Q.x + P.y - Q.y + P.z - Q.z)
        + 2 * (Q.y + Q.z) * pow(C.x - P.x, 2)
        + 2 * (Q.x + Q.z) * pow(C.y - P.y, 2)
        + 2 * (Q.x + Q.y) * pow(C.z - P.z, 2)
        + 2 * C.x * (P.z + P.y) * (P.x + Q.x - C.x)
        + 2 * C.y * (P.z + P.x) * (P.y + Q.y - C.y)
        + 2 * C.z * (P.x + P.y) * (P.z + Q.z - C.z)
        - 2 * P.y * (C.z + C.x) * (P.y - Q.y - C.y)
        - 2 * P.z * (C.x + C.y) * (P.z - Q.z - C.z)
        - 2 * P.x * (C.y + C.z) * (P.x - Q.x - C.x)

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(10);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;

    cin >> t;

    while(t--) {
        Point P, Q, d, c;
        double r;
        cin >> P.x >> P.y >> P.z;
        cin >> Q.x >> Q.y >> Q.z;
        cin >> d.x >> d.y >> d.z;
        cin >> c.x >> c.y >> c.z;
        cin >> r;
        double t = compute(P, Q, d, c, r);
        cout << t << endl;
    }

    return 0; 
}

