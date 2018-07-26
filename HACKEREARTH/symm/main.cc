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
 *      @created     : Monday Jun 11, 2018 22:08:35 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;
    int n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<string> mat(n);
        bool horizontal = true;
        bool vertical = true;
        for(int i = 0; i < n; i++) cin >> mat[i];
        for(int i = 0; i < n/2; i++) {
            for(int c = 0; c < n; c++) {
                if(mat[i][c] != mat[n-i-1][c]) horizontal = false;
            }
            if(!horizontal) break;
        }
        for(int i = 0; i < n/2; i++) {
            for(int c = 0; c < n; c++) {
                if(mat[c][i] != mat[c][n-i-1]) vertical = false;
            }
            if(!vertical) break;
        }
        if(horizontal && vertical) cout << "BOTH" << endl;
        else if (horizontal) cout << "HORIZONTAL" << endl;
        else if (vertical) cout << "VERTICAL" << endl;
        else cout << "NO" << endl;

    }

    return 0; 
}

