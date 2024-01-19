#include <bits/stdc++.h>
using namespace std;
long long bs(long long st, long long ed, long long occur, long long req)
{
    while (st <= ed)
    {
        long long mid = st + (ed - st) / 2;
        long long time = occur;
        long long sum = 0;
        long long l = mid;
        while (l--)
        {
            sum += time--;
        }
        if (sum == req)
        {
            // cout << "mid " << mid << endl;
            return mid;
        }
        else if (sum > req)
            ed = mid - 1;
        else
            st = mid + 1;
    }
    return -1;
}

void solve()
{
    long long n;
    cin >> n;
    long long sz = (n * (n - 1)) / 2;
    map<long long, long long> mp;
    for (long long i = 0; i < sz; i++)
    {
        long long x;
        cin >> x;
        mp[x]++;
    }
    long long idx = 1, maxi = 0;
    vector<long long> ans(n);
    for (auto it : mp)
    {
        long long greater = n - idx;
        maxi = max(maxi, it.first);
        long long loop = bs(1, greater + 1, greater, it.second);
        while (loop--)
        {
            ans[idx - 1] = it.first;
            idx++;
        }
    }
    ans[idx - 1] = maxi + 1;
    for (long long i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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

    long long t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}