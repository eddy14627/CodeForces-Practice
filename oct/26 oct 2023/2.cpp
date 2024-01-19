#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, tt;
    cin >> n >> m >> tt;
    long long rpt, rp, rr = 1;

    for (int i = 0; i < n; i++)
    {
        vector<int> times(m);
        for (auto &it : times)
            cin >> it;
        sort(times.begin(), times.end());
        int time = tt, cpt = 0;
        long long timeTaken = 0, cp = 0;
        for (int j = 0; j < m; j++)
        {
            if (time - times[j] >= 0)
            {
                time -= times[j];
                timeTaken += times[j];
                cpt++;
                cp += timeTaken;
            }
            else
                break;
        }
        if (i == 0)
        {
            rpt = cpt, rp = cp;
        }
        else if (cpt > rpt)
            rr++;
        else if (cpt == rpt && cp < rp)
            rr++;
    }
    cout << rr << endl;
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