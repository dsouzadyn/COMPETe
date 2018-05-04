#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i = 1, t, pos = i, maxlen = INT_MIN;
    int depth = 0, max_depth = INT_MIN, len = 0;
    int maxpos = INT_MIN, maxstart = INT_MIN;
    cin >> n;
    while(n--) {
        cin >> t;
        if(t == 1) {
            len++;
            if(depth == 0) { len = 1; pos = i; }
            depth++;
            if(depth > max_depth) maxpos = i;
            max_depth = max(max_depth, depth);
        } else {
            len++;
            if(depth == 0) { len = 1; pos = i; }
            depth--;
        }
        if(len > maxlen) {
            maxlen = len;
            maxstart = pos;
        }
        ++i;
    }
    cout << max_depth << " " << maxpos << " " << maxlen << " " << maxstart << endl;
    return 0;
}
