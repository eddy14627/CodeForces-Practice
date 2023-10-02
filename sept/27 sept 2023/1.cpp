#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<long long> l(k), r(k);
    for (auto &it : l)
        cin >> it;
    for (auto &it : r)
        cin >> it;
    long long q;
    cin >> q;
    vector<vector<long long>> range(n);
    for (long long i = 0; i < q; i++)
    {
        long long x;
        cin >> x;
        int idx = lower_bound(r.begin(), r.end(), x) - r.begin();
        long long r1 = min(x, l[idx] + r[idx] - x), r2 = max(x, l[idx] + r[idx] - x);
        if (r1 > r2)
            range[idx] = {r2 - 1, r1 - 1};
        else
            range[idx] = {r1 - 1, r2 - 1};
    }
    for (int i = 0; i < range.size(); i++)
    {
        if (!range.size())
            cout << -1 << endl;
        else
            cout << range[i][0] << " " << range[i][1] << endl;
    }
    bool toSwap = true;
    long long i = 0;
    while (i < n)
    {
        if (!range[i].size())
        {
            i++;
            continue;
        }
        if (toSwap == false)
        {
            i++;
            toSwap = true;
            continue;
        }
        int from = range[i][0], to = range[i][1];
        while (from < to)
        {
            swap(str[from++], str[to--]);
            if (from >= to)
                break;
            if (range[from].size())
            {
                toSwap = false;
                break;
            }
        }
        i = from;
    }
    cout << str << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}