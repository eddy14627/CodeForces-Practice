#include <bits/stdc++.h>
using namespace std;
bool check(int n, int m)
{
    if (m == 1 || n == 1)
        cout << "yes\n";
    else if (m >= n)
        cout << "no\n";
    else if (n % m == 0)
        cout << "no" << endl;
    else if (n % 2 == 0 && m % 2 == 0)
        cout << "no" << endl;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    if (m == 1 || n == 1)
        cout << "yes\n";
    else if (m >= n)
        cout << "no\n";
    else if (n % m == 0)
        cout << "no" << endl;
    while (m != 1 && (n % 2 == 0 && m % 2 != 0))
    {
        m = m % 10;
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