#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    long long a, b;
    cin >> a >> b;
    long long g = gcd(a, b);
    long long multi = a * b;
    int ans = (multi / g);
    if (ans == max(a, b))
        cout << a * b << endl;
    else
    {
        for (int i = a + 1; i <= b - 1; i++)
        {
            if (ans % i == 0)
            {
                cout << a * b << endl;
                return;
            }
        }
        cout << ans << endl;
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