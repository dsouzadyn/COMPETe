#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, t;
    int policea = 0;
    int crimes = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t == -1 && policea > 0) {
            policea -= 1;
        } else if(t == -1 && policea == 0){
            crimes += 1;
        } else if (t != -1){
            policea += t;
        }
    }
    cout << crimes << endl;
    return 0;
}
