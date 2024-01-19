#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[i] = {x, i};
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long sum = 0;
    for (int i = n - 1; i >= n - 3; i--)
    {
        for (int j = n - 1; j >= n - 3; j--)
        {
            for (int k = n - 1; k >= n - 3; k--)
            {
                if (a[i].second != b[j].second && c[k].second != b[j].second && c[k].second != a[i].second)
                {
                    long long tem = a[i].first + b[j].first + c[k].first;
                    sum = max(sum, tem);
                }
            }
        }
    }
    cout << sum << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}