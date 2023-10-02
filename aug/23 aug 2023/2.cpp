#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // since ax + by + cz = n (constant)
    int ans = 0;
    for (int i = 0; a * i <= n; i++)
    {
        for (int j = 0; b * j <= n; j++)
        {
            int rem = n - (a * i + b * j);
            if (rem >= 0 && rem % c == 0)
            {
                ans = max(ans, i + j + (rem / c));
            }
        }
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

    int t = 1;
    // cin>>t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}