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

double compute(Point p, Point Q, Point d, Point C, double r) {
    double l1 = scalar(sub(C, p), sub(C, p));
    double l2 = scalar(sub(C, p), sub(Q, p));
    double l3 = scalar(sub(C, p), d);
    double l4 = scalar(sub(Q, p), sub(Q, p));
    double l5 = scalar(sub(Q, p), d);
    double l6 = scalar(d, d);
    double a = (pow(r,2) * l6 - l1 * l6 + pow(l3, 2));
    double b = 2*(pow(r,2) * l5 - l5 * l1 + l2 * l3);
    double c = (pow(r,2) * l4 - l1 * l4 + pow(l2, 2));
    if(a == 0) return (-c)/b;
    else {
        double t1 = -b + sqrt(pow(b, 2) - 4 * a * c);
        t1 /= (2*a);
        double t2 = -b - sqrt(pow(b, 2) - 4 * a * c);
        t2 /= (2*a);
        if(t1 >= 0 && t2 >= 0) return min(t1, t2);
        else return max(t1, t2);
    }
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

