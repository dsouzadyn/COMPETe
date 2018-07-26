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
 *      @created     : Saturday Jul 07, 2018 13:52:53 IST
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
    int arr[n];
    int p, q;
    int product = 1;
    cin >> p >> q;
    int mod[p*q + 1] = {0};
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        product = (product * arr[i]) % (p*q);
        mod[product] += 1;
    }
    int ans = 0;

    for(int i = 0; i < p*q - 1; i++) {
        if(mod[i] > 0) {
            ans += (mod[i] * (mod[i] - 1)/2) % 1009;
        }
    }

    ans += mod[0];
    cout << ans % 1009 << endl;

    return 0;
}

