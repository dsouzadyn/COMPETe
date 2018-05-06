#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void swap(ll *a, ll *b) {
    ll t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char *argv[])
{
    ll T;
    cin >> T;
    while(T--) {
        vector<ll> ms;
        vector<ll> ts;
        ll n, s, t;
        ll mscore = 0, tscore = 0;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cin >> t;
            if(i % 2 == 0) {
                ms.push_back(t);
                mscore += t;
            } else {
                ts.push_back(t);
                tscore += t;
            }
        }
        sort(ms.begin(), ms.end());
        sort(ts.begin(), ts.end());
        ll m = ms.size()-1;
        t = 0;
        while(s-- && tscore <= mscore) {
            mscore -= ms[m] - ts[t];
            tscore += ms[m] - ts[t];
            m--;
            t++;
            if(m < 0 || t == ts.size()) break;
            if(ms[m] == ts[t]) break;
        }
        int a = 0, b = 0;
        if(tscore > mscore) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
