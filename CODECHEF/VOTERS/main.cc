#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> arr(n1+n2+n3);
    for(int i = 0; i < n1 + n2 + n3; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int prev = arr[0];
    int freq = 1;
    vector<int> ans;
    for(int i = 1; i < n1 + n2 + n3 + 1; i++) {
        if(arr[i] == prev) freq++;
        else {
            if(freq >= 2) ans.push_back(prev);
            prev = arr[i];
            freq = 1;
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}
