/***
 *          ___           ___
 *         /\  \         /\  \                                     _____
 *         \:\  \        \:\  \                                   /::\  \       ___           ___
 *          \:\  \        \:\  \                                 /:/\:\  \     /\__\         /\__\
 *      _____\:\  \   ___  \:\  \   ___     ___   ___     ___   /:/ /::\__\   /:/__/        /:/  /
 *     /::::::::\__\ /\  \  \:\__\ /\  \   /\__\ /\  \   /\__\ /:/_/:/\:|__| /::\  \       /:/__/
 *     \:\~~\~~\/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \ /:/  / \:\/:/ /:/  / \/\:\  \__   /::\  \
 *      \:\  \        \:\  /:/  /   \:\  /:/  /   \:\  /:/  /   \::/_/:/  /   ~~\:\/\__\ /:/\:\  \
 *       \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /       \::/  / \/__\:\  \
 *        \:\__\        \::/  /       \::/  /       \::/  /       \::/  /        /:/  /       \:\__\
 *         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/
 *
 *      @author      : dylan (dylan@skynet)
 *      @created     : Sunday Aug 19, 2018 13:58:26 IST
 */

#include <bits/stdc++.h>

using namespace std;

long long power(long long x, unsigned int y, int p) {
    long long res = 1;
    x = x % p;
    while(y > 0) {
        if(y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

long long modinv(long long a, long long p)
{
    return power(a, p-2, p);
}

long long modFact(long long n, long long p) {
    if(p<=n)
        return 0;
    long long res = (p-1);
    res = (p-1);
    for(long long i = n + 1; i < p; i++)
        res = (res * modinv(i, p)) % p;
    return res;
}

long long fact(long long n, long long p) {
    if(n >= p) return 0;
    long long result = 1;
    for(int i = 1; i <= n; i++)
        result = (result * i) % p;
    return result;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    cout << modFact(3, 2);

    return 0;
}

