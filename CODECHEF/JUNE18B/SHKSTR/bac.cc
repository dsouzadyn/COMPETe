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
 *      @created     : Saturday Jun 02, 2018 12:13:18 IST
 */

#include <bits/stdc++.h>

using namespace std;

bool comp(char c1, char c2) {
    return tolower(c1) < tolower(c2);
}

string LCP(string a, string b) {
    unsigned int start = 0;
    string lc = "";
    while(start < min(a.length(), b.length())) {
        if(a[start] != b[start]) break;
        lc += a[start];
        start += 1;
    }
    return lc;
}

std::ptrdiff_t len_common_prefix_10x(char const a[], char const b[])

{

    assert(std::strlen(b) <= std::strlen(a));

    using block_type = long long int;



    auto p = reinterpret_cast<block_type const*>(a);

    auto q = reinterpret_cast<block_type const*>(b);



    auto const n = std::strlen(b);

    auto const num_blocks = n / sizeof(block_type);



    auto block_mismatch = std::mismatch(q, q + num_blocks, p);

    auto b2 = reinterpret_cast<char const*>(block_mismatch.first);

    auto a2 = reinterpret_cast<char const*>(block_mismatch.second);



    return std::distance(b, std::mismatch(b2, b + n, a2).first);

}




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    cin >> n;

    vector<string> arr(n+1);

    for(int i = 1; i <= n; i++) cin >> arr[i];

    int q;
    cin >> q;
    string s;
    string currents;
    int lc;
    string current;
    int currentlc;
    while(q--) {
        cin >> n >> s;
        current = arr[1];
        currentlc = 0;
        int idx = 1;
        int maxlcp = INT_MIN;
        for(int i = 1; i <= n; i++) {
            int lcp = 0;
            currents = arr[i];
            for(int k = 0; k < s.length() && k < s.length(); k++) {
                if(currents[k] == s[k]) lcp += 1;
                else break;
            }
            if(lcp > maxlcp) {
                maxlcp = lcp;
                idx = i;
            } else if (lcp == maxlcp) {
                if(lexicographical_compare(currents.begin(), currents.end(), s.begin(), s.end()))
                idx = i;
            }
        }
        cout << arr[idx] << endl;

    }

    return 0; 
}

