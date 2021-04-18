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
 *      @created     : Friday April 16, 2021 20::27:26 IST
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
    while (t--) {
        int n;
        bool isvalid = true;
        string s;
        cin >> n;
        cin >> s;
        int mcount = 0;
        for (auto u: s) if (u == 'M') mcount++;
        if (mcount != n/3) {
            cout << "NO" << endl;
        } else {
            int mc = 0;
            int tc = 0;
            for(auto u: s) {
                if (u == 'T') tc++;
                else mc++;
                if (mc > tc) {
                    isvalid = false;
                    break;
                }
            }
            
            tc = 0;
            mc = 0;
            for(int i = n - 1; i >= 0; i--) {
                if (s[i] == 'T') tc++;
                else mc++;
                if (mc > tc) {
                    isvalid = false;
                    break;
                }
            }
            if (!isvalid) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}