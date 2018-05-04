#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char *argv[])
{
    ll T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        if (N % 10 == 0) cout << 0 << endl;
        else if (N % 10 == 5) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
