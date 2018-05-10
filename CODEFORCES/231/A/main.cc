#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int a, b, c;
    long sum = 0;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        if(a & b || a & c || b & c ) sum += 1;
    }
    cout << sum << endl;
    return 0;
}
