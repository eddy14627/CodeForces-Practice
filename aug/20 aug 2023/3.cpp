#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> type(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> type[i];
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int diff = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if ((type[i] & 1 << j) ^ (type[m] & 1 << j))
            {
                diff++;
            }
        }
        if (diff <= k)
            count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}