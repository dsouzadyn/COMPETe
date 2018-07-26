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
 *      @created     : Monday Jun 25, 2018 13:41:40 IST
 */

#include <bits/stdc++.h>

using namespace std;

long long n, m;

bool valid(long long x, long long y) {
    return x >= 1 && y >= 1 && x <= n && y <= m;
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    freopen("out.txt", "wt", stdout);
    #endif

    cin >> n >> m;

    long long xc, yc;

    cin >> xc >> yc;

    int q;
    cin >> q;
    long long ans = 0;
    while(q--) {
        long long dx, dy;
        
        cin >> dx >> dy;
        for(long long coeff = 1100000000; coeff; coeff /= 2) {
            while(valid(xc + (coeff*dx), yc + (coeff*dy))) {
                ans += coeff;
                xc = xc + coeff * dx;
                yc = yc + coeff * dy;
            } 
        }
    }

    cout << ans << endl;

    return 0; 
}

