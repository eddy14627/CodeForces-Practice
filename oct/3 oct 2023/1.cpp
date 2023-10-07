#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    int num = 1;
    // new code

    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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