#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    unordered_map<char, string> mp = {{'1', "17"}, {'2', "23"}, {'3', "37"}, {'4', "47"}, {'5', "53"}, {'6', "61"}, {'7', "71"}, {'8', "83"}, {'9', "97"}};
    cout << mp[str[0]];
    cout << endl;
    // kdjsksfj
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}