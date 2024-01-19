#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int ptr = 1, cost = 0;
    unordered_map<char, int> mp;
    mp['1'] = 1;
    mp['2'] = 2;
    mp['3'] = 3;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 7;
    mp['8'] = 8;
    mp['9'] = 9;
    mp['0'] = 10;
    for (int i = 0; i < 4; i++)
    {
        int temp = 0;
        temp = abs(mp[str[i]] - ptr);
        cost += temp + 1;
        ptr = mp[str[i]];
    }
    cout << cost << endl;
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