#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int q = m / k, r = m % k;
    int ans = 0;
    if (q > ak)
    {
        int rem = q - ak;
        r = r + rem * k;
        if (r > a1)
        {
            r = r - a1;
            int r1 = r % k;
            if (r1 <= a1)
            {
                r = r + r1;
                int q1 = r / k;
                cout << q1 << endl;
            }
            else
            {
                r = r + a1;
                int q1 = r / k;
                r = r - q1 * k;
                int r2 = r;
                cout << q1 + r2 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (r > a1)
        {
            r = r - a1;
            int r1 = r % k;
            if (r1 <= a1)
            {
                r = r + r1;
                int q1 = r / k;
                cout << q1 << endl;
            }
            else
            {
                r = r + a1;
                int q1 = r / k;
                r = r - q1 * k;
                int r2 = r;
                cout << q1 + r2 << endl;
            }
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