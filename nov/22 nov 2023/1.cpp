#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<bool> &visit, vector<vector<int>> &adj, vector<int> &cnt)
{
    bool flag = true;
    visit[node] = true;
    for (auto it : adj[node])
    {
        if (!visit[it])
        {
            dfs(it, visit, adj, cnt);
            cnt[node] += cnt[it];
            flag = false;
        }
    }
    if (flag)
    {
        cnt[node] = 1;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> cnt(n + 1);
    vector<bool> visit(n + 1);
    dfs(1, visit, adj, cnt);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << (long long)cnt[x] * cnt[y] << endl;
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