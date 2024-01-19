#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> mat(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[n - 1 - j][i])
            {
                if (mat[i][j] > mat[n - 1 - j][i])
                {
                    mat[n - 1 - j][i] = mat[i][j];
                }
                else
                {
                    mat[i][j] = mat[n - 1 - j][i];
                }
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[n - 1 - j][i])
            {
                if (mat[i][j] > mat[n - 1 - j][i])
                {
                    mat[n - 1 - j][i] = mat[i][j];
                }
                else
                {
                    mat[i][j] = mat[n - 1 - j][i];
                }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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