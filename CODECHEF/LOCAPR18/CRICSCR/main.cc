#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[])
{
    int T;
    cin >> T;
    vector<ll> runs(T);
    vector<ll> wickets(T);
    for(int i = 0; i < T; i++) {
        cin >> runs[i] >> wickets[i];
    }
    bool flag = true;
    if(T > 1) {
        for(int i = 1; i < T; i++) {
            if(wickets[i] < wickets[i-1]) i++;
            if(i % 50 == 0 && runs[i] >= runs[i-1]) { i++; continue; }
            if(i % 50 == 0 && runs[i] < runs[i-1]) { flag = false; break; }
            if( runs[i] >= runs[i - 1] && wickets[i] <= 10) continue;
            if( runs[i] < runs[i - 1] || wickets[i] > 10) { flag = false; cout << "NO" << endl; break;}
        }
        if(flag) cout << "YES" << endl;
    } else {
        if(wickets[0] != 10) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
