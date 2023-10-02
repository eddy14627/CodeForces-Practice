#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 0, maxCnt = 0, mini = INT_MAX, minCnt = 0;
    for (auto &it : arr)
    {
        cin >> it;
        if (it >= maxi)
        {
            if (it == maxi)
            {
                maxCnt++;
            }
            else
            {
                maxi = it;
                maxCnt = 1;
            }
        }

        if (it <= mini)
        {
            if (it == mini)
            {
                minCnt++;
            }
            else
            {
                mini = it;
                minCnt = 1;
            }
        }
    }
    if (mini == maxi)
        cout << 0 << " " << ((long long)n * (n - 1)) / 2 << endl;
    else
        cout << maxi - mini << " " << (long long)maxCnt * minCnt << endl;
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