#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int match = 0, notMatch = 0, middle = n % 2 ? 1 : 0;
    int st = 0, ed = n - 1;
    while (st < ed)
    {
        if (str[st++] == str[ed--])
        {
            match++;
        }
        else
        {
            notMatch++;
        }
    }
    string ans = "";
    for (int i = 0; i <= n; i++)
    {
        ans += "0";
    }
    ans[notMatch] = '1';
    for (int i = 1; i <= match; i++)
    {
        ans[(notMatch + (2 * i))] = '1';
    }
    ans[notMatch + middle] = '1';
    for (int i = 1; i <= match; i++)
    {
        ans[(notMatch + (2 * i) + middle)] = '1';
    }
    cout << ans << endl;
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