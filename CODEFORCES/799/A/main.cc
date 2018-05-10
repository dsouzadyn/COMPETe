#include <bits/stdc++.h>

using namespace std;


int main(int argc, char *argv[])
{
    int n, t, d, k;
    cin >> n >> t >> k >> d;
    int tim = 0;
    while(tim <= d) {
        n -= k;
        tim += t;
    }
    if(n > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
