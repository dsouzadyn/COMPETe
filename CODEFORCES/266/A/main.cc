#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int removes = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) removes += 1;
    }
    cout << removes << endl;
    return 0;
}
