#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1 << endl;
        return;
    }
    int cnt = 0;
    int start = (n + 1) / 2;
    for (int i = start; i <= n; i++)
    {
        int f1 = n - i, f2 = i;
        int j = 0;
        for (; j < k - 2; j++)
        {
            if (f1 > f2)
            {
                break;
            }
            int temp1 = f1, temp2 = f2;
            f2 = temp1;
            f1 = temp2 - temp1;
        }
        if (j == k - 2)
            cnt++;
    }
    cout << cnt << endl;
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