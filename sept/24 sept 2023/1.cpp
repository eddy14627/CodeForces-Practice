#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> inpt(n);
    int s1 = -1, e1 = -1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        if (i == 0)
        {
            s1 = s;
            e1 = e;
        }
        else if (s >= s1 && flag)
        {
            if (e >= e1)
            {
                flag = false;
            }
        }
    }
    if (flag)
        cout << s1 << endl;
    else
        cout << -1 << endl;
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