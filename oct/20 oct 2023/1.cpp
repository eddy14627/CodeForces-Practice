#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long ans = 0;
    for (long long i = n; i >= 1; i--)
    {
        long long num = i - 1;
        long long prevSum = (num * (num + 1) * ((2 * num) + 1)) / 6;
        long long idx = i, sum = 0, maxi = 0, val = n;
        for (long long j = idx; j <= n; j++)
        {
            long long multi = j * (val--);
            maxi = max(multi, maxi);
            prevSum = prevSum + multi;
        }
        prevSum = prevSum - maxi;
        ans = max(ans, prevSum);
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}