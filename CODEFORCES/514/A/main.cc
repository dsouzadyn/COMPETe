/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Saturday May 19, 2018 21:07:40 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    unsigned long long int n;
    unsigned long long int cpy;
    cin >> n;
    cpy = n;
    int maxn = INT_MIN;
    stack<int> stk;
    while(n) {
        int rem = n % 10;
        stk.push(rem);
        n /= 10;
    }
    int t = stk.top();
    stk.pop();
    if(t == 9) cout << 9;
    else if(9 - t < t) cout << 9 - t;
    else cout << t;
    while(!stk.empty()) {
        t = stk.top();
        stk.pop();
        if(9 - t < t) cout << 9 - t;
        else cout << t;
    }
    cout << endl;

    return 0; 
}

