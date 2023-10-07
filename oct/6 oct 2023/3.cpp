#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    bool flag = false;
    int ans = 0;
    for (int num = 255; num >= 0; num--)
    {
        unordered_map<int, bool> mp;
        int preXor = 0;
        mp[0] = true;
        for (int i = 0; i < n; i++)
        {
            preXor = preXor ^ arr[i];
            if (mp.find(preXor ^ num) != mp.end())
            {
                ans = num;
                flag = true;
                break;
            }
            mp[preXor] = true;
        }
        if (flag)
            break;
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