#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

bool findGcd(vector<ll> arr) {
    ll result = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        result = gcd(arr[i], result);
    }
    return result != 1;
}

int main(int argc, char *argv[])
{
    int T, N;
    ll t;
    cin >> T;
    while(T--) {
        cin >> N;
        vector<ll> arr;
        for(int i = 0; i < N; i++) {
            cin >> t;
            arr.push_back(t);
        }
        if(findGcd(arr)) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
