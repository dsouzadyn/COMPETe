#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    vector<long> arr;
    long t;
    long pur = 0;
    for(int i = 0; i < 4; i++) {
        cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i < 4; i++) {
        if(arr[i] == arr[i-1]) pur += 1;
    }
    cout << pur << endl;
    return 0;
}
