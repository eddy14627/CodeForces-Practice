#include <bits/stdc++.h>
using namespace std;
long long mod = 998244353;
long long myPow(long long x, long long n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
    {
        return myPow((x * x) % mod, n / 2);
    }
    return (x * myPow(x, n - 1)) % mod;
}
long long bs(vector<long long> &nums, long long val)
{
    long long n = nums.size();
    long long st = 0, ed = n - 1;
    while (st <= ed)
    {
        long long m = st + (ed - st) / 2;
        if (nums[m] == val)
            return m;
        if (nums[m] > val)
            ed = m - 1;
        else
            st = m + 1;
    }
    return -1;
}

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    long long m;
    cin >> m;
    vector<long long> c(m), d(m);
    for (auto &it : c)
        cin >> it;
    for (auto &it : d)
        cin >> it;
    long long power = 0;
    for (long long i = 0; i < m; i++)
    {
        long long num = c[i];
        long long pos = bs(a, num);
        if (pos == -1 || b[pos] < d[i])
        {
            cout << 0 << endl;
            return;
        }
    }
    for (long long i = 0; i < n; i++)
    {
        long long num = a[i];
        long long pos = bs(c, num);
        if (pos == -1)
        {
            power++;
        }
        else if (b[i] != d[pos])
            power++;
    }
    cout << (myPow(2, power)) % mod << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long t = 1;
    // cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}