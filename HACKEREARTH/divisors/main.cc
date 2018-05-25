/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 23:28:37 IST
 */

#include <bits/stdc++.h>

using namespace std;

static long long G[1000001];


long long compute(long long n) {
    if(G[n]) return G[n];
    long long rem, num;
    long sum = 0;
    for(int i = 1; i <= n; i++) {
        num = i;
        if(n % num == 0)
        while(num != 0) {
            rem = num % 10;
            num /= 10;
            if(rem & 1) { sum += rem;}
        }
    }
    return G[n] = sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    long long t, q;
    cin >> t;

    while(t--) {
        cin >> q;
        cout << compute(q) << endl;
    }

    return 0; 
}

