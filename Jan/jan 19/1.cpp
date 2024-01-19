#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (auto &it : arr)
        cin >> it;
    long long ans = 2;
    while (true)
    {
        unordered_set<long long> st;
        for (auto it : arr)
        {
            st.insert(it % ans);
        }
        if (st.size() == 2)
        {
            cout << ans << endl;
            break;
        }
        ans *= 2;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}