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
 *      @created     : Monday April 19, 2021 19:08:10 IST
 */
#include <bits/stdc++.h>

using namespace std;

bool is_integer(double k)
{
  return std::floor(k) == k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int t;
    int n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> arr(n);
        for(int i =0; i < n; i++) cin >> arr[i];
        bool isok = false;
        for(int i = 0; i < n; i++) {
            if (!is_integer(sqrt(arr[i]))) {
                isok = true;
                break;
            } 
        } 
        if (isok) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}