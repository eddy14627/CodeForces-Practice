#include <bits/stdc++.h>
using namespace std;
long long mod = 998244353;

long long fact(long long n)
{
    if (n == 1 || n == 0)
        return 1;
    return ((n) % mod * (fact(n - 1)) % mod) % mod;
}
void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    long long consecutive = 0, comb = 1;
    int i = 0;
    while (i < n)
    {
        long long cnt = 0;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            cnt++;
            consecutive++;
            i++;
        }
        if (cnt == 0)
            i++;
        else
            comb = (((comb) % mod) * ((cnt + 1) % mod)) % mod;
    }
    cout << consecutive << " " << (((comb) % mod) * (fact(consecutive) % mod)) % mod << endl;
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