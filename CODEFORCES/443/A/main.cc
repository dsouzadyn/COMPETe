#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    set<char> dist;
    getline(cin, s);
    for(char c: s) {
        if(isalpha(c)) {
            dist.insert(c);
        }
    }
    cout << dist.size() << endl;
    return 0;
}
