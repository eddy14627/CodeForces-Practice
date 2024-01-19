#include <bits/stdc++.h>
using namespace std;
char change(char ch)
{
    return ch == '1' ? '0' : '1';
}
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int same = 0, not_same = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            not_same++;
        }
        else
        {
            same++;
        }
    }
    if (same != 0 && same != n)
    {
        cout << "No" << endl;
        return;
    }
    vector<vector<int>> mat(2, vector<int>(n));
    vector<pair<int, int>> range;
    int idx = 0;
    while (idx < n)
    {
        if (a[idx] == '1')
        {
            range.push_back({idx, -1});
            if (idx != 0)
            {
                mat[0][0]++;
                mat[1][idx - 1]--;
            }

            while (idx < n && a[idx] == '1')
            {
                a[idx] = change(a[idx]);
                idx++;
            }

            range.back().second = idx - 1;

            if (idx != n)
            {
                mat[0][idx]++;
                mat[1][n - 1]--;
            }
        }
        else
        {
            idx++;
        }
    }
    int temp = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        temp += mat[0][i];
        if (temp % 2)
        {
            b[i] = change(b[i]);
        }
        temp += mat[1][i];
        if (b[i] != '0')
            flag = false;
    }
    if (flag)
    {
        cout << "Yes" << endl;
        cout << range.size() << endl;
        for (auto it : range)
        {
            cout << it.first + 1 << " " << it.second + 1 << endl;
        }
    }
    else
    {
        cout << "Yes" << endl;
        range.push_back({0, 0});
        range.push_back({1, n - 1});
        range.push_back({0, n - 1});
        cout << range.size() << endl;
        for (auto it : range)
        {
            cout << it.first + 1 << " " << it.second + 1 << endl;
        }
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