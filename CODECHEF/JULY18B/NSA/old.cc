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
 *      @created     : Thursday Jul 12, 2018 12:59:16 IST
 */

#include <bits/stdc++.h>

using namespace std;

int BIT[26];

void update(int maxElement, int x) {
    for(; x <= maxElement; x += (x & -x)) {
        BIT[x] += 1;
    }
}

long long query(int x) {
    long long sum = 0;
    for(; x > 0; x -= (x & -x))
        sum += BIT[x];
    return sum;
}

int cost[100000][28];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int n;

    cin >> n;
    string s;
    for(int t = 0; t < n; t++) {
        cin >> s;

        memset(BIT, 0, sizeof BIT);
        for(int i = 0; i < s.length(); i++) {
            for(int j = 1; j <= 26; j++) {
                cost[i][j] = abs((s[i] - 'a') - j);
            }
        }

        for(int i = 0; i < s.length(); i++) {
            for(int j = 1; j <= 26; j++)
                cout << cost[i][j] << " ";
            cout << endl;
        }

        memset(BIT, 0, sizeof BIT);
        for(int i = s.length() - 1; i >= 0; i--) {
            int before_update = query(26 - (s[i] - 'a' + 1));
            for(int j = 1; j <= 26; j++)
                cost[i][j] += query(26 - j + 1) - before_update;
            update(26, 26 - (s[i] - 'a' + 1) + 1);
        }

        for(int i = 0; i < s.length(); i++) {
            for(int j = 1; j <= 26; j++) {
                cout << cost[i][j] << " ";
            }
            cout << endl;
        }

        int actual_cost = INT_MAX;


        long long invcount = 0;
        memset(BIT, 0, sizeof BIT);
        for(int i = 0; i < (int)s.length(); i++) {
            invcount += query(s[i] - 'a');
            update(26, (s[i] - 'a') + 1);
        }
        cout << invcount << endl;
    }

    return 0;
}

