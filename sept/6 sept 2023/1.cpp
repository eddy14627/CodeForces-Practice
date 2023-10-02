#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &it : nums)
        cin >> it;
    if (nums[n - 1] == 1)
    {
        cout << "NO" << endl;
        return;
    }
    int i = n - 1;
    cout << "YES" << endl;
    while (i >= 0)
    {
        while (i - 1 >= 0 && nums[i - 1] == 0)
        {
            cout << 0 << " ";
            i--;
        }
        int tempIdx = i;
        while (i - 1 >= 0 && nums[i - 1] == 1)
        {
            cout << 0 << " ";
            i--;
        }
        cout << tempIdx - i << " ";
        i--;
    }
    cout << endl;
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