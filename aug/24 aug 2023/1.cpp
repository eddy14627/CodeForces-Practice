#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), ans;
    vector<pair<int, int>> diff(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        diff[i].first = a[i] - b[i];
        diff[i].second = i;
    }
    sort(diff.begin(), diff.end());

    int cnt = 1;
    ans.push_back(diff[n - 1].second);
    for (int i = n - 2; i >= 0; i--)
    {
        if (diff[i].first == diff[i + 1].first)
        {
            cnt++;
            ans.push_back(diff[i].second);
        }
        else
            break;
    }
    cout << cnt << endl;
    sort(ans.begin(), ans.end());
    for (auto it : ans)
        cout << it + 1 << " ";
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