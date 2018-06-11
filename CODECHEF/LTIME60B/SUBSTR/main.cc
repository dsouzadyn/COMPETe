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
 *      @created     : Saturday May 26, 2018 21:56:49 IST
 */

#include <bits/stdc++.h>

using namespace std;

int ks(string s, int k) {
   int n = s.length();

   int res = 0;
   for(int i = 0; i < n; i++) {
       int dc = 0;

       map<char, int> freq;
       for(int j = i; j < n; j++) {
            if(freq.find(s[j]) == freq.end()) {
                dc += 1;
                freq[s[j]] = 1;
            } else {
                freq[s[j]] += 1;
            }
            cout << dc << endl;
            if(dc == k) res += 1;
            if(dc > k) break;
       }
   }
   return res;
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
        int tsum = 0;
        string s;
        int k;
        cin >> s >> k;
        for(int i = k; i < s.length()-1; i++) {
            tsum += ks(s, i);
        }
        cout << tsum << endl;
    }

    return 0; 
}

