/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Monday May 21, 2018 20:32:49 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, i;
    cin >> n >> i;
    vector<int> arr(n+1);

    for(int j = 1; j <= n; j++) cin >> arr[j];
    
    int maxd = n - i;

    int d = 1;
    int cnt = (arr[i] == 1);
    while(d <= n) {
        if(i-d > 0 && i + d <= n) {
            if(arr[i+d] == 1 && arr[i-d] == 1) cnt += 2;
        } else if (i - d > 0) {
            if(arr[i-d] == 1) cnt += 1;
        } else if (i + d <= n) {
            if(arr[i+d] == 1) cnt += 1;
        }
        d++;
    }

    cout << cnt << endl;
    

    return 0; 
}

