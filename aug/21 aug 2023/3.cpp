#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<char> ch(n);
    for (auto &it : ch)
        cin >> it;
    map<char, int> mp;
    for (auto &it : ch)
        mp[it]++;
    priority_queue<pair<int, char>> pq;
    for (auto it : mp)
        pq.push({it.second, it.first});

    long long ans = 0;
    while (pq.size())
    {
        auto it = pq.top();
        pq.pop();
        long long count = min(it.first, k);
        ans = ans + count * count;
        k = k - count;
        if (k == 0)
        {
            cout << ans << endl;
            return;
        }
    }
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