/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Tuesday May 15, 2018 19:45:18 IST
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string s;

    cin >> s;
    
    vector<string> words;

    size_t start = 0;
    while(true) {
        size_t end = s.find("WUB", start);
        if(end == string::npos) {
            words.push_back(s.substr(start, end));
            break;
        }
        if(end != start) {
            words.push_back(s.substr(start, end-start));
        }
        start = end + 3;
    }

    if(!words.empty())
        cout << words[0];
    for(int i = 1; i < words.size(); i++)
        cout << " " << words[i];

    return 0; 
}

