/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 13, 2018 14:37:10 IST
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
    cin >> n;
    vector<int> arr(n);
    bool printed[1001] = {false};

    for(int i = 0; i < n; i++) cin >> arr[i];

    stack<int> stk;

    for(vector<int>::reverse_iterator rit = arr.rbegin(); rit != arr.rend(); ++rit) {
        if(!printed[*rit]) {
            stk.push(*rit);
            printed[*rit] = true;
        }
    }

    cout << stk.size() << endl;
    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    cout << endl;

    return 0; 
}

