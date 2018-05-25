/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 21, 2018 17:54:28 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxn = INT_MIN;
    if(n <= 2) cout << n << endl;
    else {
        for(int i = 1; i < n-1; i++) {
            int l = i;
            int r = i;
            while(arr[l-1] <= arr[l] && l > 0) {
                l--;
            }
            while(arr[r+1] <= arr[r] && r < n - 1) {
                r++;
            }
            maxn = max(maxn, r - l + 1);
        }
        int c = 1, d = 1;
        int t = n - 1;
        while(arr[t] >= arr[t-1] && t > 0) { c += 1; t--;}
        t = 0;
        while(arr[t] >= arr[t+1] && t < n - 1) { d += 1; t++;}
        cout << max(maxn, max(c, d)) << endl;
    }

    return 0; 
}

