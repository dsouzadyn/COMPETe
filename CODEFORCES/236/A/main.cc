#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    set<char> uniques;
    for(int i = 0; i < s.length(); i++) {
        uniques.insert(s[i]);
    }
    if(uniques.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
