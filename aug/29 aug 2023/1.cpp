#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, m;
    cin >> n >> m;
    if (n == m)
        cout << 0 << " " << 0 << endl;
    else if (n % m == 0)
    {
        long long x = n / m;
        long long min = m * ((x * (x - 1)) / 2);
        long long y = n - (m - 1);
        long long max = (y * (y - 1)) / 2;
        cout << min << " " << max << endl;
    }
    else
    {
        long long x = n - (m - 1);
        long long max = (x * (x - 1)) / 2;
        long long cnt = 1;
        while (n >= m)
        {
            n = n - m;
            cnt++;
        }
        long long y = n * ((cnt * (cnt - 1)) / 2);
        long long z = m - n;
        cnt--;
        z = z * ((cnt * (cnt - 1)) / 2);
        long long min = y + z;
        cout << min << " " << max << endl;
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