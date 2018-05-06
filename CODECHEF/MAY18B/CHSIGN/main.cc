#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int T, t;
    int N;
    cin >> T;
    while(T--) {
        cin >> N;
        queue<int> left;
        queue<int> right;
        int c = N;
        int sum = 0;
        for(int i = 1; i <= N; i++) {
            cin >> t;
            if(i % 2 == 0) left.push(t);
            else right.push(t);
            sum += t;
        }
        for(int i = c; i > 0; i--) {
            if(i % 2 != 0) {
                cout << left.front() << " ";
                left.pop();
            } else {
                if(sum > 1 && sum - right.front() > 1) {
                    sum -= right.front();
                    cout <<  -right.front() << " ";
                } else
                    cout << right.front() << " ";
                right.pop();
            }
        }
        cout << endl;
    }
    return 0;
}
