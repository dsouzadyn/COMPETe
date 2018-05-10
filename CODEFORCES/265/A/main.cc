#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    string t;
    int c = 0;
    cin >> s;
    cin >> t;
    int moves = 0;
    for(int i = 0; i < t.size(); i++) {
        if(t[i] == s[c]) { c++; moves += 1; }
    }
    cout << c+1 << endl;
    return 0;
}
