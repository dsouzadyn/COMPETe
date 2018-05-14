/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 12, 2018 19:57:41 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    int sum = 0;

    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int msum = 0;
    int c = 0;

    while(msum <= sum/2) msum += arr[c++];

    cout << c << endl;

    return 0; 
}

