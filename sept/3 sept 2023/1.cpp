#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
        {
            mp[x]++;
        }
    }
    vector<int> arr(n + 1);
    for (auto it : mp)
    {
        int a = it.first;
        int b = it.second;
        for (int i = a; i <= n; i += a)
        {
            arr[i] += b;
        }
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}