#include <bits/stdc++.h>
using namespace std;
char change(char ch)
{
    if (ch == '0')
        return '1';
    else
        return '0';
}
void solve()
{
    int n, m;
    cin >> n >> m;
    bool flag = false;
    vector<vector<char>> mat(n);
    vector<vector<int>> cnt_r, cnt_c;

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
        cnt_r.push_back({color, color});
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
        cnt_c.push_back({b, b});
    }
    if (flag)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        char color = '0';
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != '.')
            {
                if (mat[i][j] == '0')
                {
                    cnt_r[i][0]--;
                    color = '1';
                }
                else if (mat[i][j] == '1')
                {
                    cnt_r[i][1]--;
                    color = '0';
                }
                else
                {
                    if (mat[i][j] == 'L')
                    {
                        if (i > 0 && mat[i - 1][j] != '.')
                        {
                            color = change(mat[i - 1][j]);
                            if (cnt_c[j][color - '0'] == 0)
                                color = change(color);
                        }
                        mat[i][j] = color;

                        cnt_r[i][color - '0']--;
                        cnt_c[j][color - '0']--;

                        color = change(color);
                        mat[i][j + 1] = color;

                        cnt_r[i][color - '0']--;
                        cnt_c[j + 1][color - '0']--;

                        color = change(color);
                        if (cnt_r[i][color - '0'] == 0)
                            color = change(color);
                        j++;
                    }
                    else
                    {
                        mat[i][j] = color;

                        cnt_r[i][color - '0']--;
                        cnt_c[j][color - '0']--;

                        color = change(color);
                        mat[i + 1][j] = color;

                        cnt_c[j][color - '0']--;
                        cnt_r[i + 1][color - '0']--;

                        if (cnt_r[i][color - '0'] == 0)
                            color = change(color);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '0')
                mat[i][j] = 'W';
            else if (mat[i][j] == '1')
                mat[i][j] = 'B';
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