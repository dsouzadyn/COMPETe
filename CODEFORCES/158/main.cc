/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 00:34:10 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int t = arr[k-1];

    for(int i = 0; i < n; i++) if(arr[i] >= t && arr[i] > 0) count += 1;
    cout << count << endl;

    return 0; 
}

