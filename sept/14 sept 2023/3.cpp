#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int maxi = -1, mini = 1e9 + 1;
    set<int> present, notPresent;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        present.insert(x);
        maxi = max(maxi, x);
        mini = min(mini, x);
    }
    for (int i = mini; i <= maxi; i++)
    {
        if (present.find(i) == present.end())
        {
            notPresent.insert(i);
        }
    }
    int cnt = 0;
    while (cnt < ((2 * n) + 1))
    {
        cnt++;
        int x;
        cin >> x;
        if (x != -1)
        {
            auto it = notPresent.upper_bound(x);
            if (it != notPresent.end())
            {
                notPresent.erase(*it);
                present.insert(*it);
            }
            else
            {
                maxi++;
                present.insert(maxi);
            }
            present.erase(x);
            notPresent.insert(x);
            cout << (*it) << endl;
            mini = min(mini, x);
        }
        else
        {
            // mini--;
            cout << 0 << endl;
            break;
        }
    }
    fflush(stdout);
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