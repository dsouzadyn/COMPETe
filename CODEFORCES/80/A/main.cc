/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 13:56:34 IST
 */

#include <bits/stdc++.h>

using namespace std;

vector<int> primes;

void compute(int n) {
    bool prime[n+1];
    for(int i = 0; i < n; i++) prime[i] = true;
    for(int i = 2; i * i <= n; i++) {
        if(prime[i] == true) {
            for(int j = i; j*i < n; j++) prime[i*j] = false;
        }
    }
    for(int i = 2; i <= n; i++) if(prime[i]) primes.push_back(i);
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, m;
    compute(100);
    cin >> n >> m;
    auto it = find(primes.begin(), primes.end(), n);
    ++it;
    //cout << primes[0] << endl;
    cout << ((*it == m) ? "YES" : "NO") << endl;

    return 0; 
}

