#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int j = 0, k = m - 1;
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (abs(a[i] - b[j]) > abs(a[i] - b[k]))
        {
            ans += abs(a[i] - b[j]);
            j++;
        }
        else
        {
            ans += abs(a[i] - b[k]);
            k--;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}