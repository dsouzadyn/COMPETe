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
 *      @created     : Friday Aug 10, 2018 21:37:21 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string a, b;
        cin >> a;
        cin >> b;
        if(a == "bob" || b == "bob")
            cout << "yes" << endl;
        else {
            volatile int p = 4,q = 4,r = 4;
            for(int j = 0; j < 3; j++) {
                if(a[j] == 'b' || b[j] == 'b') {
                    p = j;
                    break;
                }
            }
            if(p == 4) {
                cout << "no" << endl;
                continue;
            }
            for(int j = 0; j < 3; j++) {
                if(p != j) {
                    if(a[j] == 'o' || b[j] == 'o') {
                        q = j;
                        break;
                    }
                }
            }
            if(q == 4) {
                cout << "no" << endl;
                continue;
            }
            for(int j = 0; j < 3; j++) {
                if(p != j && q != j) {
                    if(a[j] == 'b' || b[j] == 'b') {
                        r = j;
                        break;
                    }
                }
            }
            if(r == 4) {
                cout << "no" << endl;
                continue;
            }
            cout << "yes" << endl;
        }
    }

    return 0;
}

