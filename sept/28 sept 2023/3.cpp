#include <bits/stdc++.h>
using namespace std;
char fun(bool &flag)
{
    if (flag)
    {
        flag = false;
        return 'W';
    }
    flag = true;
    return 'B';
}
void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<vector<char>> inpt(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            inpt[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < m; j++)
        {
            if (inpt[i][j] != '.')
                x++;
        }
        if (x % 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    bool flag = true;
    int i = 0, j = 0;
    while (i < n)
    {
        while (j < m)
        {
            if (inpt[i][j] == 'B' || inpt[i][j] == 'W')
            {
                j++;
                continue;
            }
            if (inpt[i][j] != '.')
            {
                if (inpt[i][j] == 'L')
                {
                    inpt[i][j] = fun(flag);
                    inpt[i][j + 1] = fun(flag);
                    j++;
                }
                else if (inpt[i][j] == 'U')
                {
                    bool temp = fun(flag);
                    inpt[i][j] = temp;
                    inpt[i + 1][j] = fun(temp);
                }
            }
            j++;
        }
        i++;
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