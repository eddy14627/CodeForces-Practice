#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long st = 1, ed = n;
    while (st <= ed)
    {
        long long mid = st + (ed - st) / 2;
        long long sum = mid * (mid + 1) / 2;
        if (k > sum)
        {
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    string str = "";
    for (int i = 0; i < n; i++)
    {
        str += "a";
    }
    str[n - st - 1] = 'b';
    st = k - ((st * (st - 1)) / 2);
    str[n - st] = 'b';
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}