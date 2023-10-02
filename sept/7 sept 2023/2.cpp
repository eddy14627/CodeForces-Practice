#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pr.push_back(make_pair(a, b));
    }
    sort(pr.begin(), pr.end());

    int add = 0;
    if ((pr[0].second) % 2)
    {
        add = pr[0].second / 2;
    }
    else
    {
        add = (pr[0].second / 2) - 1;
    }
    int maxReach = pr[0].first + add;
    for (int i = 1; i < n; i++)
    {
        if (pr[i].first > maxReach)
        {
            cout << maxReach << endl;
            return;
        }
        else
        {
            int add1 = 0;
            if ((pr[i].second) % 2)
            {
                add1 = pr[i].second / 2;
            }
            else
            {
                add1 = (pr[i].second / 2) - 1;
            }
            int x = pr[i].first + add1;
            maxReach = min(maxReach, x);
        }
    }
    cout << maxReach << endl;
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