#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, h, t, sum = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t <= h) sum += 1;
        else sum += 2;
    }
    cout << sum << endl;
    return 0;
}
