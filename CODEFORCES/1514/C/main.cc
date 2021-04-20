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
 *      @created     : Monday April 19, 2021 21:03:25 IST
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int n;
    cin >> n;
    if (n % 2 == 0) {
        vector<int> ans;
        ans.push_back(1);
        int prod = 1;
        for(int i = 3; i <= n; i+=2) {
            prod *= i;
            ans.push_back(i);
            if (prod % n == 1) break;
        };
        cout << ans.size() << endl;
        for(auto u: ans) cout << u << " ";
        cout << endl;
    } else {
        vector<int> ans;
        ans.push_back(1);
        int prod = 1;
        for(int i = 2; i <= n; i++) {
            prod *= i;
            ans.push_back(i);
            if (prod % n == 1) break;
        };
        cout << ans.size() << endl;
        for(auto u: ans) cout << u << " ";
        cout << endl;
    }

    return 0;
}