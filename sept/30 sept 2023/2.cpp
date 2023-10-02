#include <bits/stdc++.h>
using namespace std;
char change(char ch)
{
    if (ch == 'W')
        return 'B';
    else
        return 'W';
}
void solve()
{
    int n, m;
    cin >> n >> m;
    bool flag = false;
    vector<vector<char>> mat(n);

    for (int i = 0; i < n; i++)
    {
        int color = 0;
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            if (x != '.')
                color++;
            mat[i].push_back(x);
        }
        if (color % 2)
            flag = true;
    }
    for (int j = 0; j < m; j++)
    {
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][j] != '.')
                b++;
        }
        if (b % 2)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        char color = 'W';
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'U')
            {
                mat[i][j] = color;
                color = change(color);
                mat[i + 1][j] = color;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        char color = 'W';
        for (int j = 0; j < n; j++)
        {
            if (mat[j][i] == 'L')
            {
                mat[j][i] = color;
                color = change(color);
                mat[j][i + 1] = color;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
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