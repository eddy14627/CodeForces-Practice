#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    if (m == 1)
        cout << 0 << endl;
    else
        cout << min(n + 1, m) << endl;
    for (int j = m - 1; j >= 0; j--)
    {
        int idx = 0;
        for (int i = j - 1; i >= 0 && idx < n; i--)
        {
            mat[idx++][j] = i;
        }
    }
    int idx = m - 1;
    for (int j = 0; j < m; j++)
    {
        for (int i = j; i < n; i++)
        {
            mat[i][j] = idx;
        }
        idx--;
    }
    // cout << "jesllsdfj" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
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