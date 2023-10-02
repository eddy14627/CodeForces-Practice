#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool x = false;

    for (int i = 0; i < s1.size() - 1; i++)
    {
        if (s1[i] == '0' && s2[i] == '0')
        {
            if (s1[i + 1] == '1' && s2[i + 1] == '1')
            {

                cout << "YES\n";
                x = true;
                break;
            }
        }
    }

    if (!x)
    {
        cout << "NO\n";
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}