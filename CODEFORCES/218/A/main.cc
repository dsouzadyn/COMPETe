/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 15:52:39 IST
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

    cin >> n >> k;
    vector<int> arr(2*n+2);
    for(int i = 0; i < 2*n+1; i++) cin >> arr[i];

    for(int i = 1; i < 2*n, k > 0; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            if(arr[i] - 1 != arr[i-1] && arr[i]-1 != arr[i+1]) {
                arr[i]--;
                k--;
            }
        }
    }

    for(int i = 0; i < 2*n+1; i++) cout << arr[i] << " ";
    cout << endl;

    return 0; 
}

