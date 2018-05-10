#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    long n,b,d, t;
    cin >> n >> b >> d;
    vector<long> orgs(n);
    for(int i = 0; i < n; i++) {
        cin >> orgs[i];
    }
    long sum = 0, discards = 0;
    for(int i = 0; i < n; i++) {
        if(orgs[i] <= b) sum += orgs[i];
        if(sum > d) {
            sum = 0;
            discards += 1;
        }
    }
    cout << discards << endl;
    return 0;
}
