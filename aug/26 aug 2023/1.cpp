#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    // map<int, int> mp;
    int maxi = 0, mini = INT_MAX, maxCnt = 0, minCnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // mp[x]++;
        if (x >= maxi)
        {
            if (x == maxi)
            {
                maxCnt++;
            }
            else
            {
                maxCnt = 1;
                maxi = x;
            }
        }
        if (x <= mini)
        {
            if (x == mini)
            {
                minCnt++;
            }
            else
            {
                minCnt = 1;
                mini = x;
            }
        }
    }
    // cout << maxi << " : " << maxCnt << mini << " : " << minCnt << endl;
    if (maxi == mini)
    {
        cout << 0 << " " << ((long long)n * (n - 1)) / 2 << endl;
    }
    else
    {
        cout << maxi - mini << " " << (long long)(maxCnt * minCnt) << endl;
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

    int t = 1;
    // cin>>t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}