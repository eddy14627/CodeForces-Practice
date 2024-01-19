#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt += x % 2;
        sum += x;
        if (i == 0)
        {
            cout << sum << " ";
        }
        else if (cnt % 3 == 0 || cnt % 3 == 2)
        {
            cout << sum - (cnt / 3) << " ";
        }
        else if (cnt % 3 == 1)
        {
            cout << sum - (cnt / 3) - 1 << " ";
        }
    }
    cout << endl;
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