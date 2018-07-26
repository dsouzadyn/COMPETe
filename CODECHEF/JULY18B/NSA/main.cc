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

void reset() {
    memset(BIT, 0, sizeof BIT);
}

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

        reset();
        cout << "===========" << endl;
        cout << s << endl;
        for(int i = 0; i < (int) s.length(); i++) {
            for(int j = 1; j <= 26; j++) {
                cost[i][j] = query(j - 1) - query((s[i] - 'a' + 1) - 1);
                cout << j << " : " << s[i] - 'a' + 1 << " : " << cost[i][j] << endl;
            }
            update(26, s[i] - 'a' + 1);
        }

        cout << "----------" << endl;

        reset();
        for(int i = (int) (s.length() - 1); i >= 0; i--) {
            for(int j = 1; j <= 26; j++) {
                cost[i][j] += query(26 - j) - query(26 - (s[i] - 'a' + 1));
                cout << j << " : " << s[i] - 'a' + 1 << " : " << cost[i][j] << endl;
            }
            update(26, 26 - (s[i] - 'a' + 1) + 1);
        }


        cout << "============" << endl;

        long long invcount = 0;
        reset();
        for(int i = 0; i < (int)s.length(); i++) {
            invcount += query(s[i] - 'a');
            update(26, (s[i] - 'a') + 1);
        }

        int min_cost = INT_MAX;

        for(int i = 0; i < (int) s.length(); i++) {
            for(int j = 1; j <= 26; j++) {
                min_cost = min(min_cost, cost[i][j] + abs((s[i] - 'a' + 1) - j));
            }
        }

        cout << invcount + min_cost << endl;
    }

    return 0;
}

