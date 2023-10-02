#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    bool flag = true;
    int st = -1, ed = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1] && flag)
        {
            st = i;
            while (i < n - 1 && v[i] > v[i + 1])
            {
                i++;
            }
            ed = i;
            flag = false;
        }
        else if (v[i] > v[i + 1] && !flag)
        {
            cout << "no" << endl;
            return;
        }
    }
    if (st == -1)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }
    if (st - 1 >= 0 && v[st - 1] > v[ed])
    {
        cout << "no" << endl;
        return;
    }
    if (ed + 1 < n && v[ed + 1] < v[st])
    {
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
    cout << st + 1 << " " << ed + 1 << endl;
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
    // cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}