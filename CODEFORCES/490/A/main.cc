/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Thursday May 10, 2018 20:29:46 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    int n, t;
    queue<int> q1;
    queue<int> q2;
    queue<int> q3;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        switch(t) {
            case 1: q1.push(i+1); break;
            case 2: q2.push(i+1); break;
            case 3: q3.push(i+1); break;
        }
    }

    int minn = min(q1.size(), min(q2.size(), q3.size()));

    cout << minn << endl;
    for(int i = 0; i < minn; i++) {
        cout << q1.front() << " " << q2.front() << " " << q3.front() << endl;
        q1.pop();
        q2.pop();
        q3.pop();
    }

    return 0; 
}

