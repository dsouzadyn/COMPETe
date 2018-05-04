#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int dp[1000000];
unsigned long long int fact(unsigned long long int n) {
    if(n == 1 || n == 0) return dp[n] = 1;
    if(dp[n] != -1) return dp[n] % MOD;
    else {
        return dp[n] = (n * fact(n - 1)) % MOD;
    }
}

int main(int argc, char *argv[])
{
    int T;
    unsigned long long N;
    for(int i = 0; i < 100000; i++) dp[i] = -1;
    cin >> T;
    while(T--) {
        cin >> N;
        cout << fact(N) << endl;
    }
    return 0;
}
