#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
        cout << "Yes" << endl;
    else if (m >= n)
        cout << "No" << endl;
    else if (n % m == 0)
        cout << "No" << endl;
    else
    {
        while (m != 1 && n % m != 0)
        {
            m = n % m;
        }
        if (m == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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