#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);
    vector<pair<int, int>> pr;
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        pr.push_back({b[i], a[i]});
    }
    sort(pr.begin(), pr.end());
    long long sum = p;
    int cnt = n - 1, i = 0;
    while (cnt && pr[i].first < p)
    {
        int mini = min(pr[i].second, cnt);
        cnt -= mini;
        sum = sum + (long long)pr[i++].first * (long long)mini;
    }
    if (cnt)
    {
        sum = sum + (long long)p * (long long)cnt;
    }
    cout << sum << endl;
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