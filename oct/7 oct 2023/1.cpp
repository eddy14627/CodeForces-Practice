#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int left = 0, right = 0;
    vector<int> arr;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            left++;
        }
        else if (x == -2)
        {
            right++;
        }
        else if (st.find(x) == st.end() && x <= m)
        {
            st.insert(x);
            x--;
            arr.push_back(x);
        }
    }
    if (n == 1 || m == 1)
    {
        cout << 1 << endl;
        return;
    }

    int ans = 0;
    if (arr.size() == 0)
    {
        ans = max(left, right);
        ans = min(ans, m);
        cout << ans << endl;
        return;
    }
    if (left == 0 && right == 0)
    {
        cout << arr.size() << endl;
        return;
    }
    // ans = max(left, right);
    sort(arr.begin(), arr.end());

    int sz = arr.size();
    for (int i = 0; i < sz; i++)
    {
        int lg = min(left, arr[i]);
        int rg = min(right, m - 1 - arr[i]);
        int val = 0;
        if (left >= right)
        {
            int rem = lower_bound(arr.begin(), arr.end(), m - left) - arr.begin();
            // rem--;
            val = left + rem;
        }
        else
        {
            int rem = lower_bound(arr.begin(), arr.end(), right) - arr.begin();
            rem = sz - 1 - rem;
            val = right + rem;
        }
        // cout << rg << " " << lg << endl;
        ans = max({ans, rg + lg + 1, val});
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