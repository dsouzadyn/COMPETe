/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 20:36:28 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int x; int y;
} Point;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    Point wll;
    Point wur;
    Point rll;
    Point rur;
    cin >> n;

    while(n--) {
        cin >> wll.x >> wll.y >> wur.x >> wur.y;
        cin >> rll.x >> rll.y >> rur.x >> rur.y;

        int x1 = max(wll.x, rll.x);
        int y1 = max(wll.y, rll.y);
        int x2 = min(wur.x, rur.x);
        int y2 = min(wur.y, rur.y);

        if(x1 >= x2 || y1 >= y2) {
            cout << "No Overlap" << endl;
        } else {
            cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        }
        if(n)
            cout << endl;

    }

    return 0; 
}

