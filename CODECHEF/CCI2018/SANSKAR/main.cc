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
 *      @created     : Sunday Aug 19, 2018 12:56:32 IST
 */

#include <bits/stdc++.h>

using namespace std;

int subsetSum(vector<long long> arr, long long n, long long sum) {
    bool subset[n+1][sum+1];
    for(long long i = 0; i <= n; i++)
        subset[i][0] = true;
    for(long long i = 1; i <= sum; i++)
        subset[0][i] = false;
    for(long long i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(j < arr[i-1])
                subset[i][j] = subset[i-1][j];
            if(j >= arr[i-1])
                subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i-1]];
        }
    }
    return subset[n][sum];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        long long sum = 0;
        vector<long long> data(n);
        for(int i = 0; i < n; i++) {
            cin >> data[i];
            sum += data[i];
        }
        if(sum % k != 0) cout << "no" << endl;
        else {
            if(subsetSum(data, data.size(), sum/k)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}

