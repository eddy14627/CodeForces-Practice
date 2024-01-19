#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n);
    set<int> order;
    for (int i = 0; i < n; i++)
    {
        int sz;
        cin >> sz;
        mat[i].resize(sz);
        for (int j = 0; j < sz; j++)
        {
            cin >> mat[i][j];
            order.insert(mat[i][j]);
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int m = mat[i].size();
        for (int j = 0; j < m; j++)
        {
            auto it = order.find(mat[i][j]);
            it++;
            if (j + 1 < m && (*it != mat[i][j + 1]))
                s++;
        }
    }
    cout << s << " " << s + n - 1 << "\n";
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
    // cin>>t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}