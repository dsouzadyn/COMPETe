/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 13:24:04 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, k;
    long t;

    cin >> n >> k;
    int rem;
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> t;
        set<int> nums;
        while(t != 0) {
            rem = t % 10;
            t /= 10;
            if(rem <= k) nums.insert(rem);
        }
        if(nums.size() == k + 1) total += 1;
    }

    cout << total << endl;

    return 0; 
}

