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
 *      @created     : Friday May 25, 2018 15:40:02 IST
 */

#include <bits/stdc++.h>

using namespace std;

long long dp[101][101];

long long nCr(long long n, long long r) {
    if(n == r) return dp[n][r] = 1;
    if(r == 0) return dp[n][r] = 1;
    if(r == 1) return dp[n][r] = n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int m, n;
    
    const long MOD = 10e9+7;

    while(cin >> n >> m) {
        int tn = n;
        if(n == 0 || m == 0) break;
        
        long long ans = nCr(n, min(n-m, m));

        cout << tn << " things taken " << m << " at a time is " << ans << " exactly." << endl;
    }

    return 0; 
}

