#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;

    unordered_map<int, bool> mp;
    int preXor = 0;
    mp[0] = true;
    // kjfdkdsajfkl
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        preXor = preXor ^ arr[i];
        for (int num = 255; num >= 0; num--)
        {
            if (mp.find(preXor ^ num) != mp.end())
            {
                ans = max(ans, num);
            }
        }
        mp[preXor] = true;
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