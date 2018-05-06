#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char *argv[])
{
    int T;
    int N;
    cin >> T;
    while(T--) {
        cin >> N;
        ll ans = 0;
        ll t;
        for(int i = 0; i < N; i++) { cin >> t; ans ^= (t + t); }
        cout << ans << endl;
    }
    return 0;
}
