#include <bits/stdc++.h>
using namespace std;
void solve()
{
    float a, b, c;
    cin >> a >> b >> c;
    float sum = (a + b) / 2;
    if (a > b)
    {
        int x = (sum - b) / c;
        sum = (sum - b) / c;
        if (sum > x)
        {
            cout << x + 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    else
    {
        int x = (sum - a) / c;
        sum = (sum - a) / c;
        if (sum > x)
        {
            cout << x + 1 << endl;
        }
        else
        {
            cout << x << endl;
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