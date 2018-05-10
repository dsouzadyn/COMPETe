#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    vector<char> n;
    for(int i = 0; i < s.length(); i+=2) {
        n.push_back(s[i]);
    }
    sort(n.begin(), n.end());
    for(int i = 0; i < n.size() - 1; i++) {
        cout << n[i] << '+';
    }
    cout << n[n.size() - 1] << endl;
    return 0;
}
