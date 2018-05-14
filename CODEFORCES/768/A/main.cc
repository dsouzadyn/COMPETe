/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 00:19:58 IST
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int counter = 0;
    for(int i = 1; i < n - 1; i++) if(arr[i] > arr[0] && arr[i] < arr[n-1]) counter += 1;
    cout << counter << endl;

    return 0; 
}

