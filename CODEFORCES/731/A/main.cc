#include <bits/stdc++.h>

using namespace std;

string g = "abcdefghijklmnopqrstuvwxyz";

int ri = 0;
int li = 0;

int rl(char target) {
    int rotations = 0;
    while(g[li] != target) {
        li--;
        rotations += 1;
        if(li < 0) li = g.size() - 1;
    }
    return rotations;
}

int rr(char target) {
    int rotations = 0;
    while(g[ri] != target) {
        ri++;
        rotations += 1;
        if(ri == g.size()) ri = 0;
    }
    return rotations;
}

int main(int argc, char *argv[])
{
    string s;
    int score = 0;
    cin >> s;
    for(int i = 0; i < s.length();  i++) {
        score += min(rl(s[i]), rr(s[i]));
    }
    cout << score << endl;
    return 0;
}
