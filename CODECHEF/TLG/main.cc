#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    int player;
    int scorea, ta, tb, scoreb;
    cin >> N;
    scorea = 0;
    scoreb = 0;
    int max_lead = INT_MIN;
    while(N--) {
        cin >> ta >> tb;
        scorea += ta;
        scoreb += tb;
        if(scorea > scoreb && (scorea - scoreb) > max_lead) {
            max_lead = scorea - scoreb;
            player = 1;
        } else if((scoreb - scorea) > max_lead) {
            player = 2;
            max_lead = scoreb - scorea;
        }
    }
    cout << player << " " << max_lead << endl;
    return 0;
}
