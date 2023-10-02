#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    long long mod = 998244353;
    int n = str.length();
    long long multi = 0;
    int i = 0;
    int dl = 0;
    while (i < n)
    {
        long long cnt = 0;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            dl++;
            cnt++;
            i++;
        }
        if (cnt == 0)
            i++;
        else
            multi = (((multi) % mod) + ((cnt * (cnt + 1)) % mod)) % mod;
    }
    cout << dl << " " << (multi) << endl;
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