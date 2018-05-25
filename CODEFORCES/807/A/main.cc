/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 16:38:47 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    int prevb, preva;

    int nextb, nexta;

    cin >> n;

    cin >> prevb >> preva;

    bool rated = false;
    bool desc = true;

    if (prevb - preva != 0) rated = true;

    for(int i = 1; i < n; i++) {
        cin >> nextb >> nexta;
        if(nextb - nexta != 0) rated = true;
        if(nexta > preva || nextb > prevb) desc = false;
        preva = nexta;
        prevb = nextb;
    }

    if(rated) cout << "rated" << endl;
    else if (!desc) cout << "unrated" << endl;
    else cout << "maybe" << endl;


    return 0; 
}

