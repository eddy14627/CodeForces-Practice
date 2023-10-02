#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    long long mina = INT_MAX, minb = INT_MAX;
    long long suma = 0, sumb = 0;
    for (long long &it : a)
    {
        cin >> it;
        mina = min(it, mina);
        suma += it;
    }
    for (long long &it : b)
    {
        cin >> it;
        minb = min(it, minb);
        sumb += it;
    }
    if (((mina * n) + sumb) < ((minb * n) + suma))
    {
        cout << (mina * n) + sumb << "\n";
    }
    else
    {
        cout << minb * n + suma << "\n";
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