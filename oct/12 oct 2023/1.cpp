#include <bits/stdc++.h>
using namespace std;
bool fun(long long pass, string x, string s)
{
    long long n = x.size(), m = s.size();
    for (long long i = 0; i < pass; i++)
    {
        x += x;
    }
    n = x.size();
    for (long long i = 0; i <= n - m; i++)
    {
        long long j = i, k = 0;
        while (k < m && j < n && (s[k] == x[j]))
        {
            k++;
            j++;
        }
        if (k == m)
            return true;
    }
    return false;
}
void solve()
{
    long long n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (x == s)
    {
        cout << 0 << endl;
        return;
    }
    long long st = 0, ed = (m + 1) / 2;
    long long ans = -1;
    while (st <= ed)
    {
        long long mid = st + (ed - st) / 2;
        if (fun(mid, x, s))
        {
            if (ans == -1)
                ans = mid;
            else
                ans = min(mid, ans);
            ed = mid - 1;
        }
        else
        {
            st = mid + 1;
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

    long long t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}