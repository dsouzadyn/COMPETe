/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 16:05:57 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 1; i < n - 1; i++) {
            if(arr[i-1] - arr[i] > 0 && arr[i+1] - arr[i] > 0) arr[i] = -arr[i];
        }
        if(arr[0] - arr[1] < 0) arr[0] = -arr[0];
        if(arr[n-1] - arr[n-2] < 0) arr[n-1] = -arr[n-1];
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    return 0; 
}

