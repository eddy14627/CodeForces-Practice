#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (r % 2 == 0)
    {
        if (r - 2 > 0)
        {
            cout << 2 << " " << r - 2 << endl;
            return;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    else
    {
        if (l < r && r != 3)
        {
            cout << 2 << " " << r - 3 << endl;
            return;
        }
        else if (l == r)
        {
            for (int i = 2; i * i <= r; i++)
            {
                if (r % i == 0)
                {
                    cout << i << " " << r - i << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
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