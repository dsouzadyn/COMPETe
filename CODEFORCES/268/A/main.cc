#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, t;
    cin >> n;
    vector<int> hosts(n);
    unordered_map<int, int> guests;
    for(int i = 0; i < n; i++) {
        cin >> hosts[i] >> t;
        if(guests.find(t) == guests.end()) guests[t] = 1;
        else guests[t] += 1;
    }
    int times = 0;
    for(int i = 0; i < n; i++) {
        if(guests.find(hosts[i]) != guests.end()) {
            times += guests[hosts[i]];
        }
    }
    cout << times << endl;
    return 0;
}
