#include <bits/stdc++.h>
using namespace std;

long long checkCondition(vector<vector<int>> &mat, int val, int d)
{
    int n = mat.size();
    int m = mat[0].size();
    long long op = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int diff = abs(mat[i][j] - val);
            if (diff % d != 0)
            {
                return -1;
            }
            op += diff / d;
        }
    }
    return op;
}

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<vector<int>> mat(n, vector<int>(m));
    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            maxi = max(maxi, mat[i][j]);
            mini = min(mini, mat[i][j]);
        }
    }

    long long ans = 1e18;
    for (int val = mini; val <= maxi; val++)
    {
        long long temp = checkCondition(mat, val, d);
        if (temp != -1)
        {
            ans = min(ans, temp);
        }
    }
    if (ans == 1e18)
        ans = -1;
    cout << ans << endl;
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