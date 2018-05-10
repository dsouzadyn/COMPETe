#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    long a, b;
    long ay;
    long by;
    cin >> a >> b;
    long c = 0;
    ay = a;
    by = b;
    while(a <= b) {
        c++;
        a = c*(a*3);
        b = c*(b*2);
    }
    cout << c << endl;
    return 0;
}
