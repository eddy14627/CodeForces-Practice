#include <bits/stdc++.h>
using namespace std;
int topoLogicalSort(vector<vector<int>> &adj, vector<int> &indeg)
{
    int n = adj.size();
    queue<int> q;
    for (int i = 1; i < n; i++)
    {
        if (indeg[i] == 1)
            q.push(i);
    }

    int central = -1;
    while (q.size())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            int node = q.front();
            central = node;
            q.pop();
            for (auto neig : adj[node])
            {
                indeg[neig]--;
                if (indeg[neig] == 1)
                    q.push(neig);
            }
        }
    }
    return central;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        indeg[u]++;
        indeg[v]++;
    }
    int central = topoLogicalSort(adj, indeg);
    cout << adj[central].size() << " ";
    if (adj[central].size() == 1)
    {
        cout << adj[adj[central][0]].size() - 1 << endl;
        return;
    }
    else
    {
        unordered_map<int, int> mp;
        for (auto node : adj[central])
        {
            mp[adj[node].size()]++;
        }
        int size = -1, times = 0;
        for (auto it : mp)
        {
            if (it.second > times)
            {
                times = it.second;
                size = it.first;
            }
        }
        cout << size - 1 << endl;
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}