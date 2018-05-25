/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Sunday May 20, 2018 17:34:51 IST
 */

#include <bits/stdc++.h>

using namespace std;

template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    cin >> n;

    vector<pair<int, int>> l;
    int a, b, prev_a, prev_b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        l.push_back({a, b});
    }

    sort(l.begin(), l.end());

    for(int i = 1; i < n; i++) {
        if(l[i].first > l[i-1].first && l[i].second < l[i-1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    


    return 0; 
}

