/***
 *          ___           ___
 *         /\  \         /\  \                                     _____
 *         \:\  \        \:\  \                                   /::\  \       ___           ___
 *          \:\  \        \:\  \                                 /:/\:\  \     /\__\         /\__\
 *      _____\:\  \   ___  \:\  \   ___     ___   ___     ___   /:/ /::\__\   /:/__/        /:/  /
 *     /::::::::\__\ /\  \  \:\__\ /\  \   /\__\ /\  \   /\__\ /:/_/:/\:|__| /::\  \       /:/__/
 *     \:\~~\~~\/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \ /:/  / \:\/:/ /:/  / \/\:\  \__   /::\  \
 *      \:\  \        \:\  /:/  /   \:\  /:/  /   \:\  /:/  /   \::/_/:/  /   ~~\:\/\__\ /:/\:\  \
 *       \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /       \::/  / \/__\:\  \
 *        \:\__\        \::/  /       \::/  /       \::/  /       \::/  /        /:/  /       \:\__\
 *         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/
 *
 *      @author      : dylan (dylan@skynet)
 *      @created     : Thursday Aug 09, 2018 18:07:02 IST
 */

#include <bits/stdc++.h>

using namespace std;

string ans;

void expand(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
        "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
        "eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
        "eighty","ninety"};

    if(value<0)
    {
        ans += "minus ";
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        ans += " thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                ans += " and";
            }
            ans += " " ;
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        ans += " hundred";
        if(value % 100)
        {
            ans += " and ";
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        ans += tens[value / 10];
        if(value % 10)
        {
            ans += " ";
            expand(value % 10);
        }
    }
    else
    {
        ans += ones[value];
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ans = "";
    int a, b;
    cin >> a >> b;
    vector<int> data;
    vector<pair<string, int>> data_two;
    while(true) {
        if(a >= 99999 || b >= 99999) {
            cout << "Out of bounds" << endl;
            return 0;
        }
        if (a == b) {
            cout << a << endl;
            return 0;
        }
        data.push_back(a);
        data.push_back(b);
        sort(data.begin(), data.end());
        ans = "";
        expand(a);
        data_two.push_back(make_pair(ans, a));
        ans = "";
        expand(b);
        data_two.push_back(make_pair(ans, b));
        sort(data_two.begin(), data_two.end());
        a = data[0] + data_two[0].second;
        b = data[1] + data_two[1].second;
        data.clear();
        data_two.clear();
    }
    return 0;
}

