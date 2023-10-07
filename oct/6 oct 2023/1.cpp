#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> edges(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        edges[u].push_back({v, i});
        edges[v].push_back({u, i});
    }

    vector<int> iteration(n), activationIdx(n);
    iteration[0] = 1, activationIdx[0] = -1;
    queue<int> q;
    q.push(0);
    while (q.size())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            int node = q.front();
            q.pop();
            for (auto neighbour : edges[node])
            {
                int adj = neighbour.first, idx = neighbour.second;
                if (iteration[adj] == 0)
                {
                    iteration[adj] = iteration[node] + (idx <= activationIdx[node]);
                    activationIdx[adj] = idx;
                    q.push(adj);
                }
            }
        }
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, iteration[i]);
    }
    cout << maxi << endl;
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