#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int problem = 0;
    int op = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            problem++;
            if (op == -1)
            {
                op = n - 1 - i;
            }
        }
        if (problem > 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    if (problem == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (v[n - 1] > v[0] && problem == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << op << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}