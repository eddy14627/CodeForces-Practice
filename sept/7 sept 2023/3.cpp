#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int fun(int l, long long a)
{
    int st = 1, ed = 1e7;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (a * (1 + mid) >= l)
        {
            ed = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return st;
}
void solve()
{
    long long l, r;
    cin >> l >> r;
    // for (long long a = 2; a <= r; a++)
    // {
    long long a = 2;
    int st = 1, ed = (1e7) / a;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (a * (1 + mid) >= l)
        {
            ed = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    if ((a * (1 + st) >= l) && (a * (1 + st) <= r))
    {
        cout << a << " " << a * (st) << endl;
        return;
    }
    // }
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