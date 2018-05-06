#include <bits/stdc++.h>
#define MOD 1000000007

typedef long long ll;


using namespace std;

ll fibn1[100005];
ll fibn[100005];

void compute(ll n) {
    fibn1[1] = 1;
    fibn1[2] = 0;
    fibn[1] = 0;
    fibn[2] = 1;
    for(int i = 3; i < n; ++i) {
        fibn1[i] = (fibn1[i-1] + fibn1[i-2]) % MOD;
        fibn[i] = (fibn[i-1] + fibn[i-2]) % MOD;
    }
}


int main(int argc, char *argv[])
{
    ll N, M;
    ll T, t;
    compute(100001);
    cin >> T;
    while(T--) {
        cin >> M >> N;
        ll res = 0;
        for(int i = 0; i < M; i++) {
            cin >> t;
            res += ((t*fibn1[N] % MOD)*M % MOD);
        }
        for(int i = 0; i < M; i++) {
            cin >> t;
            res += ((t*fibn[N] % MOD)*M % MOD);
        }
        cout << res % MOD << endl;
    }
    return 0;
}
