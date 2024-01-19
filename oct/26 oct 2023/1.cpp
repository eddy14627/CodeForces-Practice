#include <bits/stdc++.h>
using namespace std;
void solve()
{
    double n, bs, h;
    cin >> n >> bs >> h;
    vector<double> bases(n);
    for (auto &it : bases)
        cin >> it;
    double area = (((double)1 / 2) * (bs * h)) * n;
    sort(bases.begin(), bases.end());
    double prevh = bases[0] + h;
    for (double i = 1; i < n; i++)
    {
        if (prevh > bases[i])
        {
            double nh = prevh - bases[i];
            double nb = (nh / h) * bs;
            area = area - (((double)1 / 2) * (nb * nh));
        }
        prevh = bases[i] + h;
    }
    cout << fixed << setprecision(9) << area << endl;
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