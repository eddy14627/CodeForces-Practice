#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> odd, even;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i % 2)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    if (odd.size())
        sort(odd.begin(), odd.end());
    if (even.size())
        sort(even.begin(), even.end());
    long long oddSum = -1e18, evenSum = -1e18;
    if (odd.size())
        oddSum = odd[odd.size() - 1];
    if (even.size())
        evenSum = even[even.size() - 1];
    int idx = odd.size() - 2;
    while (idx >= 0 && odd[idx] > 0)
    {
        oddSum += odd[idx--];
    }
    idx = even.size() - 2;
    while (idx >= 0 && even[idx] > 0)
    {
        evenSum += even[idx--];
    }
    if (evenSum > oddSum)
        cout << evenSum << endl;
    else
        cout << oddSum << endl;
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