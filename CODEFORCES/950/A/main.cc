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
 *      @author      : dylan (dylan@skynet)
 *      @created     : Tuesday Jul 10, 2018 20:31:55 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int l, r, b;

    cin >> l >> r >> b;

    if(l == 0 && b == 0) {
        cout << 0 << endl;
        return 0;
    }

    if(r == 0 && b == 0) {
        cout << 0 << endl;
        return 0;
    }

    int lefts = 0;
    int rights = 0;
    lefts = rights = min(l, r);
    if(min(l, r) + b < max(l, r)) {
        r = 2 * (min(l,r) + b);
        l = 0;
    } else {
        while(l < r && b > 0) {
            l++;
            b--;
        }
        while(l > r && b > 0) {
            r++;
            b--;
        }
        while(b > 1) {
            l++;
            r++;
            b -= 2;
        }
    }

    cout << l + r << endl;


    return 0;
}

