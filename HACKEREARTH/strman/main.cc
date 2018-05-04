#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[])
{
    ll T;
    ll N, M;
    string s;
    cin >> T;
    while(T--) {
        cin >> s >> N >> M;
        sort(s.begin() + N, s.begin() + M + 1, greater<ll>());
        cout << s << endl;
    }
    return 0;
}
