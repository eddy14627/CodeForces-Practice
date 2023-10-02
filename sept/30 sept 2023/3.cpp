#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        ans = max(ans, x);
    }

    for (int i = 0; i < 32; i++)
    {
        int sz = arr.size();
        int dIdx = sz, cnt = 0;
        for (int j = sz - 1; j >= 0; j--)
        {
            if (arr[j] & (1 << i))
            {
                cnt++;
                if (cnt % 2)
                    dIdx = j;
            }
        }
        int num = 0;
        for (int j = dIdx; j < sz; j++)
        {
            num ^= arr[j];
        }
        // cout << "num = " << num << endl;
        ans = max(ans, num);
        arr.push_back(num);
    }
    cout << ans << endl;
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