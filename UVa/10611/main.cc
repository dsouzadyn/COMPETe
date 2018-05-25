/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 18:57:59 IST
 */

#include <bits/stdc++.h>

using namespace std;

int bsup(vector<int> &arr, int q) {
    int l = 0;
    int r = arr.size() - 1;
    int m = -1;
    while (l <= r) {
        m = (l + r)/2;
        if (arr[m] <= q) l = m + 1;
        else if(arr[m] > q) r = m - 1;
    }
    if(l >= arr.size()) return -1;
    return arr[l];
}

int bsdown(vector<int> &arr, int q) {
    int l = 0;
    int r = arr.size() - 1;
    int m;
    while(l <= r) {
        m = (l+r)/2;
        if(arr[m] < q) l = m + 1;
        else if(arr[m] >= q) r = m - 1;
    }
    if(r < 0) return -1;
    else return arr[r];
}




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    cin >> n;

    vector<int> arr;
    int t;

    for(int i = 0; i < n; i++) {
        cin >> t;
        arr.push_back(t);
    }

    int q;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> q;
        int l = bsdown(arr, q);
        int r = bsup(arr, q);
        if(l == -1) cout << "X ";
        else cout << l << " ";
        if(r == -1) cout << "X";
        else cout << r;
        cout << endl;
    }

    return 0; 
}

