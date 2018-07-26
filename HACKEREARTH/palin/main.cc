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
 *      @created     : Monday Jun 11, 2018 22:23:57 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        string s;
        int n;
        cin >> s >> n;
        string temp;
        string x;
        int m = s.length() / n;
        if(n == 1) {
            if(!isPalindrome(s))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            continue;
        }
        if(s.length() % n != 0) { 
            cout << "NO" << endl;
            continue;
        }
        bool yes = true;
        for(int i = 0; i < s.length() - m; i += m) {
            if(!isPalindrome(s.substr(i, m))) {
                cout << "NO" << endl;
                yes = false;
                break;
            }
        }
        if(yes)
            cout << "YES" << endl;
    }

    return 0; 
}

