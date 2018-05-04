#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main(int argc, char *argv[])
{
    ll T;
    ll N, K;
    cin >> T;
    while(T--) {
        cin >> N >> K;
        bool flag = false;
        vector<ll> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];
        for(int p = 0; p < N; p++) {
            for(int q = p + 1; q < N; q++) {
                ll d = gcd(A[p], A[q]);
                while (d != 1) {
                    if (d > K) {
                        flag = true;
                        break;
                    } else {
                        if(A[p] % d == 0)
                            A[p] /= d;
                        if(A[q] % d == 0)
                            A[q] /= d;
                    }
                    d = gcd(A[p], A[q]);
                }
            }
            if(flag) break;
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
