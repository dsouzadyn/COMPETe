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
 *      @created     : Saturday Jul 21, 2018 13:12:51 IST
 */

#include <bits/stdc++.h>

using namespace std;

int BIT[65];

void update(int maxElement, int x) {
    for(; x <= maxElement; x += (x & -x)) {
        BIT[x] += 1;
    }
}

long long query(int x) {
    long long sum = 0;
    for(; x > 0; x -= (x & -x)) {
        sum += BIT[x];
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //#ifndef ONLINE_JUDGE
    //freopen("in.txt", "rt", stdin);
    //#endif

    int n, t, bits;
    int inv_count = 0;
    memset(BIT, 0, sizeof BIT);
    cin >> n;
    vector<int> arr;
    int max_el = INT_MIN;
    string s;
    cin >> s;
    stringstream ss(s);
    int g;
    while(ss >> g) {
        bitset<64> temp(g);
        bits = temp.count();
        arr.push_back(bits);
        max_el = max(bits, max_el);
        if(ss.peek() == ',') ss.ignore();
    }

    for(int i = n-1; i >= 0; i--) {
        inv_count += query(arr[i]-1);
        update(max_el, arr[i]);
    }

    cout << inv_count << endl;

    return 0;
}

