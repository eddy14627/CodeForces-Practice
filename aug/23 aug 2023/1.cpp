#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int pm = 0, nm = 0, pi = -1, ni = -1, np = 0, nn = 0, nz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            np++;
            if (arr[i] > pm)
            {
                pi = i;
                pm = arr[i];
            }
        }
        else if (arr[i] < 0)
        {
            nn++;
            if (arr[i] < ni)
            {
                ni = i;
                nm = arr[i];
            }
        }
        else
        {
            nz++;
        }
    }
    // cout << pm << " " << nm << endl;
    int total = 0;
    vector<pair<int, int>> op;
    if (np + nz == n)
    {
        for (int i = 1; i < n; i++)
        {
            op.push_back({i + 1, i});
            total++;
        }
    }
    else if (nn + nn == n)
    {
        for (int i = n - 2; i >= 0; i--)
        {
            op.push_back({i + 1, i + 2});
            total++;
        }
    }
    else
    {
        if (abs(pm) > abs(nm))
        {
            if (nn <= 12)
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] < 0)
                    {
                        arr[i] = arr[i] + arr[pi];
                        op.push_back({i + 1, pi + 1});
                        total++;
                    }
                }
                for (int i = 1; i < n; i++)
                {
                    arr[i] = arr[i] + arr[i - 1];
                    op.push_back({i + 1, i});
                    total++;
                }
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    arr[ni] = arr[ni] + arr[ni];
                    op.push_back({ni + 1, ni + 1});
                    total++;
                }
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] >= 0)
                    {
                        arr[i] = arr[i] + arr[ni];
                        op.push_back({i + 1, ni + 1});
                        total++;
                    }
                }
                for (int i = n - 2; i >= 0; i--)
                {
                    arr[i] = arr[i] + arr[i + 1];
                    op.push_back({i + 1, i + 2});
                    total++;
                }
            }
        }
        else
        {
            if (np <= 12)
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] >= 0)
                    {
                        arr[i] = arr[i] + arr[ni];
                        op.push_back({i + 1, ni + 1});
                        total++;
                    }
                }
                for (int i = n - 2; i >= 0; i--)
                {
                    arr[i] = arr[i] + arr[i + 1];
                    op.push_back({i + 1, i + 2});
                    total++;
                }
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    arr[pi] = arr[pi] + arr[pi];
                    op.push_back({pi + 1, pi + 1});
                    total++;
                }
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] < 0)
                    {
                        arr[i] = arr[i] + arr[pi];
                        op.push_back({i + 1, pi + 1});
                        total++;
                    }
                }
                for (int i = 1; i < n; i++)
                {
                    arr[i] = arr[i] + arr[i - 1];
                    op.push_back({i + 1, i});
                    total++;
                }
            }
        }
    }
    cout << total << endl;
    for (auto &it : op)
        cout << it.first << " " << it.second << endl;
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