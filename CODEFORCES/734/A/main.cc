#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    long n;
    char c;
    long asum = 0;
    long dsum = 0;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n && cin.get(c); i++) {
        if(c == 'A') asum += 1;
        else dsum += 1;
    }
    if(asum > dsum) {
        cout << "Anton" << endl;
    } else if (asum < dsum) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}
