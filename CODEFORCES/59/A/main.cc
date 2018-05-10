#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    int lowerc = 0, upperc = 0;
    for(int i = 0; i < s.length(); i++) {
        if(islower(s[i])) lowerc += 1;
        else upperc += 1;
    }
    if(lowerc < upperc) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
