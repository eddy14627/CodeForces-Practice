#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int minW = INT_MAX, minL = INT_MAX, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0 || minW < x || minL > x)
        {
            minL = min(minL, x);
        }
        else
        {
            minW = min(minW, x);
            cnt++;
        }
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