/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 21, 2018 15:47:21 IST
 */

#include <bits/stdc++.h>

using namespace std;
int n, k;
bool can_place(vector<int> &arr, int x) {
    int current_dist = arr[0];
    int c = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - current_dist >= x) {
            c++;
            current_dist = arr[i];
        }
    }
    return c >= k;
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
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int lo = 0;
        int hi = 1e9 + 7;
        int mid = 0;
        while(lo < hi - 1) {
            mid = (lo + hi) / 2;
            if(can_place(arr, mid)) lo = mid;
            else hi = mid - 1;
        }

        if(can_place(arr, hi)) cout << hi << endl;
        else cout << lo << endl;
    }

    return 0; 
}

