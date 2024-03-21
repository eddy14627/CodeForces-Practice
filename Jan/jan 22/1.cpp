#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (auto i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        mp[it]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto [a, b] : mp)
        pq.push({-a, b});

    int initSize = n;
    while (pq.size())
    {
        auto [a, b] = pq.top();
        pq.pop();
        a = -a;
        if (n - b >= a)
            n = n - b;
    }
    cout << (initSize == n ? -1 : n) << endl;
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