#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[])
{
    ll N, H;
    ll q;
    ll t = 0, c = 0;
    cin >> N >> H;
    vector<ll> arr(N);
    for(ll i = 0; i < arr.size(); i++) cin >> arr[i];
    ll l = 0;
    ll r = arr.size() - 1;
    while(true) {
        cin >> q;
        if(q == 0) break;
        else {
            switch (q) {
                case 1: if(c != l) c -= 1; break;
                case 2: if(c != r) c += 1; break;
                case 3: if(arr[c] > 0 && t == 0) { arr[c] -= 1; t = 1; } break;
                case 4: if(arr[c] != H && t == 1) { arr[c] += 1; t = 0;} break;

            }
        }
    }
    for(ll i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
