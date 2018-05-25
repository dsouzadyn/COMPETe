/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 13:17:26 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    long long n;

    cin >> n;

    if(n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n/2+1) << endl;
    }

    return 0; 
}

