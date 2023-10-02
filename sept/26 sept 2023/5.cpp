#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;
    if (k > x)
    {
        cout << "No" << endl;
        return;
    }
    long long min_sum = (k * (k + 1)) / 2;
    long long max_sum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);
    if (x >= min_sum && x <= max_sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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