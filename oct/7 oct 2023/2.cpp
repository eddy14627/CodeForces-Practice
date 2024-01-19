#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> line(n);
    for (auto &it : line)
        cin >> it;
    sort(line.begin(), line.end());
    for (int i = 0; i < m; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (c <= 0)
        {
            cout << "No" << endl;
            continue;
        }
        int idx = lower_bound(line.begin(), line.end(), b) - line.begin();
        long long v1 = idx == n ? INT_MAX : abs(b - line[idx]);
        long long v2 = idx == 0 ? INT_MAX : abs(b - line[idx - 1]);
        bool flag = false;
        v1 = v1 * v1, v2 = v2 * v2;
        if (v1 < v2)
        {
            if (v1 < a * c * 4)
            {
                cout << "Yes" << endl;
                cout << line[idx] << endl;
                flag = true;
            }
        }
        else
        {
            if (v2 < a * c * 4)
            {
                cout << "Yes" << endl;
                cout << line[idx - 1] << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "No" << endl;
    }
    cout << endl;
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