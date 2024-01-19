#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> ans(n);
    ans[0] = x;
    ans[n - 1] = 1;
    unordered_set<int> st;
    st.insert(x);
    st.insert(1);
    for (int i = 1; i < n - 1; i++)
    {
        int j = i + 1;
        for (; j <= n; j += (i + 1))
        {
            if ((st.find(j) == st.end()) && (j % (i + 1) == 0) && (j == i + 1 || (2 * j <= n && x % (2 * j)) || ans[j - 1]))
            {
                ans[i] = j;
                st.insert(j);
                break;
            }
        }
        if (j >= n + 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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