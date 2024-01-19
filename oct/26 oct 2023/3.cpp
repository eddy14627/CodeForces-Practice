#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int x = m / k;
    if (x <= ak)
    {
        if (k * x == m)
            cout << 0 << endl;
        else
        {
            int left = m - (k * x);
            if (left <= a1)
                cout << 0 << endl;
            else
            {
                int left2 = left - a1;
                int x2 = left2 / k;
                if (x2 * k == left2)
                    cout << x2 << endl;
                else
                {
                    int rem = left2 % k;
                    if (rem <= a1)
                    {
                        cout << x2 + 1 << endl;
                    }
                    else
                        cout << x2 + (left2 - (x2 * k)) << endl;
                }
            }
        }
    }
    else
    {
        int left = m - (k * ak);
        if (left <= a1)
            cout << 0 << endl;
        else
        {
            int left2 = left - a1;
            int x2 = left2 / k;
            if (x2 * k == left2)
                cout << x2 << endl;
            else
            {
                int rem = left2 % k;
                if (rem <= a1)
                {
                    cout << x2 + 1 << endl;
                }
                else
                    cout << x2 + (left2 - (x2 * k)) << endl;
            }
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