#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, t;
    int sscore = 0, dscore = 0;
    deque<int> dq;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        dq.push_back(t);
    }
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(dq.front() > dq.back()) {
                sscore += dq.front();
                dq.pop_front();
            } else {
                sscore += dq.back();
                dq.pop_back();
            }
        } else {
            if(dq.front() > dq.back()) {
                dscore += dq.front();
                dq.pop_front();
            } else {
                dscore += dq.back();
                dq.pop_back();
            }
        }
    }
    cout << sscore << " " << dscore << endl;
    return 0;
}
