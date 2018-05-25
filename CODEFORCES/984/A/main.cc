/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 16:53:39 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, t;
    cin >> n;
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        cin >> t;
        dq.push_back(t);
    }

    sort(dq.begin(), dq.end());

    bool flag = true;
    while(dq.size() != 1) {
        if(flag) {
            dq.pop_back();
        } else {
            dq.pop_front();
        }
        flag = !flag;
    }

    cout << dq.front() << endl;


    return 0; 
}

