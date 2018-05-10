#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    vector<int> wires(n+2);
    for(int i = 1; i <= n; i++) {
        cin >> wires[i];
    }
    int q;
    cin >> q;
    int x, y;
    while(q--) {
        cin >> x >> y;
        int c = 1;
        int l = 0;
        int r = 0;
        while(c < wires[x] + 1) {
            if(c < y) {
                l++;
            }
            if (c > y) {
                r++;
            }

            c++;
        }
        wires[x-1] += l;
        wires[x+1] += r;
        wires[x] = 0;
    }
    for(int i = 1; i <= n; i++) cout << wires[i] << endl;
    return 0;
}
