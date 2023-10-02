#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int mod = 1e9 + 7;
    int x, y;
    long long n;
    cin >> x >> y;
    cin >> n;
    n--;
    vector<long long> v(6);
    v[0] = x, v[1] = y;
    for (int i = 2; i < 6; i++)
    {
        v[i] = v[i - 1] - v[i - 2];
    }
    int idx = n % 6;
    long long ans = v[idx];
    ans = ((ans % mod) + mod);
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
    // cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}