#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n), deg(n);
    vector<unordered_set<int>> mat(n);
    vector<int> indeg(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if (x - '0' == 1)
            {
                adj[i].push_back(j);
                indeg[j]++;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     deg[indeg[i]].push_back(i);
    // }

    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < indeg[i]; j++)
        {
            queue<int> q;
            q.push(i);
            while (q.size())
            {
                int n = q.size();
                for (int i = 0; i < n; i++)
                {
                    int node = q.front();
                    q.pop();
                    mat[node].insert(cnt);
                    for (auto it : adj[node])
                    {
                        q.push(it);
                    }
                }
            }
            cnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << mat[i].size() << " ";
        for (int j : mat[i])
        {
            cout << j << " ";
        }
        cout << endl;
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