/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Wednesday May 16, 2018 01:14:51 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    vector<pair<double, double>> ul;
    vector<pair<double, double>> lr;
    char c;
    double x1, x2, y1, y2;
    while(cin >> c) {
        if(c != 'r') break;
        cin >> x1 >> y1 >> x2 >> y2;
        ul.push_back({x1, y1});
        lr.push_back({x2, y2});
    }
    int point = 1;
    while(true) {
        cin >> x1 >> y1;
        if(x1 == 9999.9 && y1 == 9999.9) break;
        bool flag = false;
        for(int i = 0; i < ul.size(); i++) {
            if((x1 > ul[i].first && x1 < lr[i].first) && (y1 < ul[i].second && y1 > lr[i].second)) {
                cout << "Point " << point << " is contained in figure " << i+1 << endl;
                flag = true;
            }
        }
        if(!flag)
            cout << "Point " << point << " is not contained in any figure" << endl;
        ++point;
    }
    return 0; 
}

