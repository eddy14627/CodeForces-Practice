#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n <= 6)
        cout << "No" << endl;
    else
    {
        if ((n - 3) % 3)
        {
            cout << "Yes" << endl;
            cout << 1 << " " << 2 << " " << n - 3 << endl;
        }
        else
        {
            if ((n - 5) % 3 && n - 5 > 4)
            {
                cout << "Yes" << endl;
                cout << 1 << " " << 4 << " " << n - 5 << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
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