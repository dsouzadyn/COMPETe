#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned int n;
    while(cin >> n) {
        if(n == 0) break;
        unsigned int sq = (int) sqrt(n);
        if(sq * sq == n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
