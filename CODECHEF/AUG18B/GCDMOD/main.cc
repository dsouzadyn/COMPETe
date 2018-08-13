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
 *      @created     : Friday Aug 10, 2018 23:59:15 IST
 */

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long modmul(long long a, long long b, long long m) {
    long long result = 0;
    a = a % m;
    while (b > 0) {
        if (b & 1) result = ((result % m) + (a % m)) % m;
        a = (a * 2) % m;
        b /= 2;
    }
    return result % m;
}

long long modexp(long long a, long long b, long long m) {
    long long result = 1;
    while (b > 0) {
        if (b & 1) result = modmul(result, a, m);
        a = modmul(a, a, m);
        b = b >> 1;
    }
    return result % m;
}

long long gcd(long long a, long long b, long long m) {
    if(a == b) return a % m;

    if(a == 0) return b % m;
    if(b == 0) return a % m;

    if(~a & 1) {
        if(b & 1) return gcd(a >> 1, b, m) % m;
        else return (gcd(a >> 1, b >> 1, m) << 1) % m;
    }

    if(~b & 1)
        return gcd(a, b >> 1, m) % m;

    if(a > b)
        return gcd((a-b) >> 1, b, m) % m;
    return gcd((b-a)>>1, a, m) % m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if(abs(a - b) == 0) {
            cout << (modexp(a,c,MOD) + modexp(b,c, MOD)) % MOD << endl;
        } else {
            // for any two a and b, their gcd never exceeds a - b
            cout << gcd((modexp(a,c, a-b) + modexp(b,c,a-b)), a-b, MOD) << endl;
        }
    }

    return 0;
}

