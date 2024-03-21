#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    long long prev = 0;
    vector<long long> v(n);
    for (auto &it : v)
        cin >> it;
    for (long long i = 0; i < n; i++)
    {
        long long x = v[i];
        long long rem = a * (x - prev);
        f = max(f - b, f - rem);
        if (f <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        prev = x;
    }
    cout << "YES" << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}