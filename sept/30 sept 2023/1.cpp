#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int m;
    cin >> m;
    string l, r;
    cin >> l >> r;
    int n = str.size();
    if (n < m)
    {
        cout << "YES" << endl;
        return;
    }
    int idx = -1;
    for (int i = 0; i < m; i++)
    {
        char st = l[i], ed = r[i];
        int stIdx = idx;
        for (char ch = st; ch <= ed; ch++)
        {
            int currIdx = stIdx + 1;
            while (currIdx < n && str[currIdx] != ch)
            {
                currIdx++;
            }
            idx = max(idx, currIdx);
        }
        if (n - idx - 1 < m - i - 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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