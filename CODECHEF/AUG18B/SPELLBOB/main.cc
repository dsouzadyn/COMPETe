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
    string bob = "bob";
    for(int i = 0; i < t; i++) {
        bool flag = false;
        string a, b;
        cin >> a;
        cin >> b;
        if(a == "bob" || b == "bob")
            cout << "yes" << endl;
        else {
            for(int i = 0; i < 3; i++) {
                if((a[0] == bob[i] || b[0] == bob[i])
                    && (a[1] == bob[(i+1) % 3] || b[1] == bob[(i+1) % 3])
                    && (a[2] == bob[(i+2) % 3] || b[2] == bob[(i+2) % 3])) flag = true;
            }
            if(flag == true)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}

