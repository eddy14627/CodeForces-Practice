#include <bits/stdc++.h>
using namespace std;
// int cnt = 0;
void solve()
{
    // cout << "Solving : " << ++cnt << endl;
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    bool middle = false;
    long long fcnt = 0, bcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            fcnt++;
            if (i == n / 2)
                middle = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - 1 - i])
        {
            bcnt++;
            if (i == n / 2)
                middle = true;
        }
    }

    if (fcnt > bcnt)
    {
        if (bcnt == 0)
        {
            cout << 2 << endl;
        }
        else if (n % 2 == 0)
        {
            if (bcnt % 2 == 0)
            {
                cout << 2 * bcnt - 1 << endl;
            }
            else
            {
                cout << 2 * bcnt << endl;
            }
        }
        else
        {
            if (middle)
                cout << 2 * bcnt - 1 << endl;
            else if (bcnt % 2 == 0)
            {
                cout << 2 * bcnt - 1 << endl;
            }
            else
            {
                cout << 2 * bcnt << endl;
            }
        }
    }
    else if (fcnt < bcnt)
    {
        if (fcnt == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0)
        {
            if (fcnt % 2 == 0)
            {
                cout << 2 * fcnt << endl;
            }
            else
            {
                cout << 2 * fcnt - 1 << endl;
            }
        }
        else
        {
            if (middle)
                cout << 2 * fcnt - 1 << endl;
            else if (fcnt % 2 == 0)
            {
                cout << 2 * fcnt - 1 << endl;
            }
            else
            {
                cout << 2 * fcnt << endl;
            }
        }
    }
    else
    {
        if (bcnt == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << 2 * fcnt - 1 << endl;
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