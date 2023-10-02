#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    float ft = (float)n / m;
    // cout << ft << endl;
    int x = ceil(ft);
    // cout << x << endl;
    int mini = m * (x * (x - 1)) / 2;
    int k = n - (m - 1);
    int maxi = (k * (k - 1)) / 2;
    cout << mini << " " << maxi << endl;
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