#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int midx = 3, midy = 3;
    int x, y;
    int t;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cin >> t;
            if(t == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(midx-x) + abs(midy-y) << endl;
    return 0;
}
