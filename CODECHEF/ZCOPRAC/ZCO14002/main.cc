#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

map<int, ull> memo;

ull minu(vector<ull> arr, int N) {
    if (N <= 2) return 0;
    if (N == 3) {
        ull mini = arr[0];
        for(int i = 1; i < N; i++) mini = min(mini, arr[i]);
        return mini;
    }
    if(memo[N]) return memo[N];
    ull ans = min(arr[N-1] + minu(arr, N-1), min(arr[N-2]+minu(arr, N-2), arr[N-3]+minu(arr, N-3)));
    return memo[N] = ans;
}

int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    vector<ull> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    cout << minu(arr, N) << "\n";
    return 0;
}
