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
 *      @created     : Saturday Jun 02, 2018 13:43:24 IST
 */

#include <bits/stdc++.h>
#define M 64

using namespace std;


int cbits(unsigned long long n) {
    int c;
    for(c = 0; n; n >>= 1) c += n & 1;
    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while(t--) {
        unsigned long long a, b;
        cin >> a >> b;
        if(a == b) {
            cout << 0 << endl;
            continue;
        }
        if((b == 1 && a != 0) || b == 0) {
            cout << -1 << endl;
            continue;
        }
        b--;
        bitset<M> abits(a);
        bitset<M> bbits(b);
        if(abits.count() <= bbits.count())
            cout << bbits.count() - abits.count() + 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0; 
}

