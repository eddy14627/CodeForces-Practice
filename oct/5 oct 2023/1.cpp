#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &it : p)
        cin >> it;
    if (n == 1)
    {
        cout << p[0] << endl;
        return;
    }
    vector<int> ans1(n);
    vector<int> ans2(n);
    int maxi = 0, idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (p[i] > maxi)
        {
            maxi = p[i];
            idx = i;
        }
    }

    if (idx == n - 1)
    {
        ans2[0] = p[idx];
        for (int i = 0; i < n - 1; i++)
        {
            ans2[i + 1] = p[i];
        }
    }
    int ind = 0;
    for (int i = idx; i < n; i++)
    {
        ans1[ind++] = p[i];
    }
    idx--;
    ans1[ind++] = p[idx--];
    while (idx >= 0 && p[idx] > p[0])
    {
        ans1[ind++] = p[idx--];
    }

    int idx1 = 0;
    while (idx1 <= idx)
    {
        ans1[ind++] = p[idx1++];
    }

    for (int i = 0; i < n; i++)
    {
        if (ans1[i] > ans2[i])
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans1[j] << " ";
            }
            cout << "\n";
            return;
        }
        else if (ans1[i] < ans2[i])
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans2[j] << " ";
            }
            cout << "\n";
            return;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << ans2[j] << " ";
    }
    cout << "\n";
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