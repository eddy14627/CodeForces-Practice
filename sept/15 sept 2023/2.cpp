#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<long long, long long>> pr;
    for (long long i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        pr.push_back({x, y});
    }
    if (a <= k && b <= k)
    {
        cout << 0 << endl;
    }
    else
    {
        long long dist1 = 1e18, dist2 = 1e18, dist = 0;
        long long x1 = pr[a - 1].first, y1 = pr[a - 1].second;
        long long x2 = pr[b - 1].first, y2 = pr[b - 1].second;
        dist = abs(x1 - x2) + abs(y1 - y2);
        for (long long i = 0; i < k; i++)
        {
            long long x = pr[i].first, y = pr[i].second;
            dist1 = min(dist1, abs(x - x1) + abs(y - y1));
        }
        for (long long i = 0; i < k; i++)
        {
            long long x = pr[i].first, y = pr[i].second;
            dist2 = min(dist2, abs(x - x2) + abs(y - y2));
        }
        if (a > k && b > k)
        {
            cout << min(dist, dist1 + dist2) << endl;
        }
        else if (a <= k && b > k)
        {
            cout << min(dist, dist2) << endl;
        }
        else
        {
            cout << min(dist, dist1) << endl;
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

    long long t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}