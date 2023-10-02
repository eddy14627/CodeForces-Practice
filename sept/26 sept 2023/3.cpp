#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        if (it == k)
        {
            flag = true;
        }
    }
    if (flag)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
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