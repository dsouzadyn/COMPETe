#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main(int argc, char *argv[])
{
    int y, w;
    cin >> y >> w;
    int b = 6;
    int a = 6 - (max(y, w) - 1);
    int divi = gcd(a, b);
    cout << a/divi << "/" << b/divi << endl;
    return 0;
}
