/**
 * @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 * @created     : Friday May 11, 2018 00:06:18 IST
 */

#include <bits/stdc++.h>

using namespace std;

string mul(string a, string b) {
    int n1 = a.size();
    int n2 = b.size();
    if(n1 == 0 || n2 == 0)  return "0";
    
    vector<int> res(n1 + n2, 0);
    int ia = 0;
    int ib = 0;
    for(int i = n1 - 1; i>=0; i--) {
        int carry = 0;
        int n1 = a[i] - '0';

        ib = 0;

        for(int j = n2 - 1; j >= 0; j--) {
            int n2 = b[j] - '0';
            int sum = n1 * n2 + res[ia + ib] + carry;
            carry = sum/10;
            res[ia + ib] = sum % 10;
            ib++;
        }

        if(carry > 0)
            res[ia + ib] += carry;

        ia++;
    }

    int i = res.size() - 1;
    while (i>= 0 && res[i] == 0) {
        i--;
    }
    if(i == -1) return "0";

    string s = "";
    while(i >= 0) s += std::to_string(res[i--]);

    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Solution goes here
    string a;
    string b;
    while(cin >> a) {
        cin >> b;
        cout << mul(a, b) << endl;
    }
    return 0; 
}

