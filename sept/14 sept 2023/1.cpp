#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].first;
        pr[i].second = i;
    }
    sort(pr.begin(), pr.end());
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[pr[i].second] = n - i;
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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