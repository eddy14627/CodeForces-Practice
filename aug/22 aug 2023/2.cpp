#include <bits/stdc++.h>
using namespace std;

long long checkCondition(vector<vector<int>> &mat, int val, int d)
{
    int n = mat.size();
    int m = mat[0].size();
    long long op = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int diff = abs(mat[i][j] - val);
            if (diff % d != 0)
            {
                return -1;
            }
            op += diff / d;
        }
    }
    return op;
}

void solve()
{
    int n;
    vector<int> arr(n);
    int pg = 0, ng = 0, pi = -1, ni = -1, np = 0, nn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
        {
            np++;
            if (arr[i] >= pg)
            {
                pg = arr[i];
                pi = i;
            }
        }
        else
        {
            nn++;
            if (arr[i] < ng)
            {
                ng = arr[i];
                ni = i;
            }
        }
    }

    int op = 0;
    vector<pair<int, int>> operations;
    if (pg > ng)
    {
        if (nn <= 12)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < 0)
                {
                    arr[i] = arr[i] + arr[pi];
                    operations.push_back({i + 1, pi + 1});
                    op++;
                }
            }
            for (int i = 1; i < n; i++)
            {
                arr[i] = arr[i] + arr[i - 1];
                operations.push_back({i + 1, i});
                op++;
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                arr[ni] = arr[ni] + arr[ni];
                operations.push_back({ni + 1, ni + 1});
                op++;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > 0)
                {
                    arr[i] = arr[i] - arr[ni];
                    operations.push_back({i + 1, ni + 1});
                    op++;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                arr[i] = arr[i] + arr[i + 1];
                operations.push_back({i + 1, i + 2});
                op++;
            }
        }
    }
    else
    {
        if (np <= 12)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > 0)
                {
                    arr[i] = arr[i] + arr[ni];
                    operations.push_back({i + 1, ni + 1});
                    op++;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                arr[i] = arr[i] + arr[i + 1];
                operations.push_back({i + 1, i + 2});
                op++;
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                arr[pi] = arr[pi] + arr[pi];
                operations.push_back({pi + 1, pi + 1});
                op++;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < 0)
                {
                    arr[i] = arr[i] + arr[pi];
                    operations.push_back({i + 1, pi + 1});
                    op++;
                }
            }
            for (int i = 1; i < n; i++)
            {
                arr[i] = arr[i] + arr[i - 1];
                operations.push_back({i + 1, i});
                op++;
            }
        }
    }
    cout << op << endl;
    for (int i = 0; i < operations.size(); i++)
    {
        cout << operations[i].first << " " << operations[i].second << endl;
    }
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