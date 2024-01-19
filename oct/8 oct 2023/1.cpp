#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + (long long)x;
    }
    cout << -sum << endl;
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