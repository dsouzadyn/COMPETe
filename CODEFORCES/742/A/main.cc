/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 17, 2018 13:06:35 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    long n;
    cin >> n;
    
    if(n == 0) cout << 1 << endl;
    else {
        switch(n % 4) {
            case 0: cout << 6 << endl; break;
            case 1: cout << 8 << endl; break;
            case 2: cout << 4 << endl; break;
            case 3: cout << 2 << endl; break;
        }
    }

    return 0; 
}

