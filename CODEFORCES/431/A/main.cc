#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    map<char, int> cals;
    int t;
    string s;
    cin >> t;
    cals['1'] = t;
    cin >> t;
    cals['2'] = t;
    cin >> t;
    cals['3'] = t;
    cin >> t;
    cals['4'] = t;
    cin >> s;
    long tcals = 0;
    for(int i = 0; i < s.length(); i++) {
        tcals += cals[s[i]];
    }
    cout << tcals << endl;
    return 0;
}
