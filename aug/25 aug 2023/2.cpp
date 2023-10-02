#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n - 1);
    for (auto &it : arr)
        cin >> it;
    vector<int> range(n + 1);
    for (int i = 0; i < n + 1; i++)
        range[i] = i;
    long long sum = ((long long)n * (n + 1)) / 2;
    int cnt = 0;
    if (arr.back() != sum)
    {
        for (int i = 1; i < n; i++)
        {
            if (range[arr[i] - arr[i - 1]] != -1)
            {
                range[arr[i] - arr[i - 1]] = -1;
                cnt++;
            }
        }
        if (cnt < n - 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    long long add = 0;
    for (int i = 1; i < n; i++)
    {
        long long idx = arr[i] - arr[i - 1];
        if (idx > 0 && idx <= n && range[idx] != -1)
        {
            range[idx] = -1;
            cnt++;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (range[i] != -1)
            add += i;
    }
    if (cnt == n - 2)
    {
        if (add == arr[0] && range[arr[0]] != -1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    else if (cnt == n - 3)
    {
        if (arr[0] <= n && range[arr[0]] != -1)
        {
            add -= arr[0];
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
        if (add <= n && range[add] != -1)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    else
    {
        cout << "NO" << endl;
        return;
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