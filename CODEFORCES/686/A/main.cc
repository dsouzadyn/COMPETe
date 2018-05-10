#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char *argv[])
{
    ll n, x;
    cin >> n >> x;
    char q;
    ll d;
    ll icepacks = x;
    ll kids = 0;
    while(n--) {
        cin >> q >> d;
        if(q == '-' && d <= icepacks) icepacks -= d;
        else if(q == '-' && d > icepacks) kids += 1;
        else icepacks += d;
    }
    cout << icepacks << " " << kids << endl;
    return 0;
}
