#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &prime)
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    int x1 = sqrt(n);
    float x2 = sqrt(n);
    if (x2 > x1)
        cout << "NO" << endl;
    else
    {
        if (prime[x1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
    vector<int> prime(1e6 + 1, 1);
    for (int i = 2; i <= 1e3; i++)
    {
        for (int j = i * i; j <= 1e6; j += i)
        {
            prime[j] = 0;
        }
    }
    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve(prime);
    }
    return 0;
}