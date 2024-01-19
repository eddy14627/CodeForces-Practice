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
    int same = 0, no_same = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (a[i] == '1')
                flag = false;
            same++;
        }
        else
        {
            flag = false;
            no_same++;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        cout << 0 << endl;
        return;
    }
    if (same != 0 && same != n)
    {
        cout << "NO\n";
        return;
    }
    int idx = 0;
    vector<pair<int, int>> range;
    vector<int> cnt_a(n), cnt_b(n + 1);
    while (idx < n)
    {
        if (a[idx] == '1')
        {
            int idx1 = idx - 1;
            while (idx < n && a[idx] == '1')
            {
                cnt_a[idx]++;
                idx++;
            }
            int idx2 = idx, i = 0;
            cnt_b[0]++;
            cnt_b[idx + 1]--;
            // while (i <= idx1)
            // {
            //     b[i] = change(b[i]);
            //     i++;
            // }
            // while (i <= idx2 - 1)
            // {
            //     a[i] = change(a[i]);
            //     i++;
            // }
            // while (i < n)
            // {
            //     b[i] = change(b[i]);
            //     i++;
            // }
            range.push_back({idx1 + 2, idx2});
        }
        else
            idx++;
    }
    // cout << "b : ";
    // for (auto it : b)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    int i = 0;
    for (; i < n; i++)
    {
        if (cnt_a[i] % 2)
        {
            a[i] = change(a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
    }
    if (i == n)
    {
        cout << "YES\n";
        cout << range.size() << endl;
        for (auto x : range)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    else
    {
        range.push_back({1, 1});
        range.push_back({2, n});
        range.push_back({1, n});
        cout << "YES\n";
        cout << range.size() << endl;
        for (auto x : range)
        {
            cout << x.first << " " << x.second << endl;
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