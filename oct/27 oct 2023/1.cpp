#include <bits/stdc++.h>
using namespace std;

bool condition(vector<int> &a, vector<int> &h, int len, int k)
{
    int n = a.size(), cnt = 0, i = 0;
    long long sum_a = 0;
    for (; i < len; i++)
    {
        sum_a += a[i];
        if (i > 0 && (h[i - 1] % h[i]))
        {
            cnt++;
        }
    }
    if (cnt == 0 && sum_a <= k)
    {
        return true;
    }
    for (; i < n; i++)
    {
        sum_a += a[i];
        sum_a -= a[i - len];
        if (i - len >= 0 && (h[i - len] % h[i - len + 1]))
        {
            cnt--;
        }
        if (i > 0 && (h[i - 1] % h[i]))
        {
            cnt++;
        }

        if (cnt == 0 && sum_a <= k)
        {

            return true;
        }
    }
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : h)
        cin >> it;
    int st = 0, ed = n;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (condition(a, h, mid, k))
        {
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    cout << ed << endl;
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