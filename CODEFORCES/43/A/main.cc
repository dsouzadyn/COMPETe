/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 17:45:35 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    unordered_map<string, int> scores;

    int n;
    string s;

    cin >> n;
    int mx = INT_MIN;
    string mxt;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(scores.find(s) != scores.end()) scores[s] += 1;
        else scores[s] = 1;
        if(scores[s] > mx) {
            mxt = s;
            mx = scores[s];
        }
    }

    cout << mxt << endl;

    return 0; 
}

