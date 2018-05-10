#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int groups = 1;
    vector<string> arr(n);
    cin >> arr[0];
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        if(arr[i] != arr[i-1]) groups += 1;
    }
    cout << groups << endl;
    return 0;
}
