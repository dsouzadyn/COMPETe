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
 *      @created     : Tuesday Aug 14, 2018 10:10:10 IST
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
    unordered_map<char, char> chars;
    chars['a'] = 'z';
    chars['b'] = 'y';
    chars['c'] = 'x';
    chars['d'] = 'w';
    chars['e'] = 'v';
    chars['f'] = 'u';
    chars['g'] = 't';
    chars['h'] = 's';
    chars['i'] = 'r';
    chars['j'] = 'q';
    chars['k'] = 'p';
    chars['l'] = 'o';
    chars['m'] = 'n';
    chars['n'] = 'm';
    chars['o'] = 'l';
    chars['p'] = 'k';
    chars['q'] = 'j';
    chars['r'] = 'i';
    chars['s'] = 'h';
    chars['t'] = 'g';
    chars['u'] = 'f';
    chars['v'] = 'e';
    chars['w'] = 'd';
    chars['x'] = 'c';
    chars['y'] = 'b';
    chars['z'] = 'a';
    while(t--) {
        string s;
        int trash;
        cin >> trash;
        cin >> s;
        int len = (s.length() % 2 == 0? s.length() : s.length() - 1);
        for(int i = 1; i < len; i += 2) {
            char temp = s[i-1];
            s[i-1] = s[i];
            s[i] = temp;
        }
        for(int i = 0; i < s.length(); i++) {
            s[i] = chars[s[i]];
        }
        cout << s << endl;
    }

    return 0;
}

