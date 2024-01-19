#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (m > n)
    {
        if (k == 3)
        {
            cout << (((m / n) - 1) * (n - 1)) + (m % n) << endl;
            return;
        }
        else if (k == 2)
        {
            cout << (((m / n) - 1) + n) << endl;
            return;
        }
        else if (k == 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (k == 2)
        {
            cout << (m) << endl;
            return;
        }
        else if (k == 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
        }
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}