#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    bool flag = false;
    if (k == 3 || k == 5 || k == 2)
    {
        int maxRem = 0;
        for (int i = 0; i < n; ++i)
        {

            int x;
            cin >> x;
            if (flag)
                continue;
            if (x % k == 0)
            {
                flag = true;
            }
            int rem = x % k;
            maxRem = max(maxRem, rem);
        }
        if (flag)
        {
            cout << 0 << endl;
            return;
        }
        cout << k - maxRem << endl;
    }
    else
    {
        int maxRem = 0;
        int rem_2 = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x % k == 0)
            {
                flag = true;
            }
            int rem = x % k;
            if (rem == 2)
                rem_2++;
            maxRem = max(maxRem, rem);
        }
        if (flag)
        {
            cout << 0 << endl;
            return;
        }
        if (rem_2 > 1)
            cout << 0 << endl;
        else if (rem_2 == 1)
            cout << 1 << endl;
        else if (maxRem == 3)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
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