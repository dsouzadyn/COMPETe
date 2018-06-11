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
 *      @created     : Saturday May 26, 2018 16:04:30 IST
 */

#include <bits/stdc++.h>

using namespace std;

void add(string a, string b) {
    vector<int> ans;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(a.length() < b.size()) {
        while(a.size() != b.size()) a = "0" + a;
    } else {
        while(b.size() != a.size()) b = "0" + b;
    }
    int carry = 0;
    for(int i = a.size() - 1; i >= 0; i--) {
        int t = (a[i] - '0') + (b[i] - '0') + carry;
        ans.push_back((t % 10));
        carry = t / 10;
    }
    if(carry != 0) ans.push_back(carry);
    int n = 0;
    while(ans[n] == 0) n++;
    for(int i = n; i < (int)ans.size(); i++) cout << ans[i];
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string a, b;

    int t;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        add(a, b);
    }

    return 0; 
}

