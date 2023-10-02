#include <bits/stdc++.h>
using namespace std;

long long sum(long long n)
{
    return (n * (n + 1)) / 2;
}
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    long long g = gcd(a, b);
    return ((a * b) / g);
}

void solve()
{
    long long n, x, y;
    cin >> n >> x >> y;

    long long sumx = sum(n);
    long long xDiv = n / x;
    long long yDiv = n / y;
    long long xi = n - xDiv;
    sumx = sumx - sum(xi);
    // cout << "sumx : " << sumx << endl;
    long long lcmm = lcm(x, y);
    // cout << "lcm : " << lcmm << endl;
    long long com = n / lcmm;
    // cout << "common : " << com << endl;
    long long reduce = xDiv - com;
    n = n - reduce;
    // cout << "n : " << n << endl;
    long long sumy = sum(n) - sum(n - com) + sum(yDiv - com);
    // cout << "sumy : " << sumy << endl;
    cout << sumx - sumy << endl;
    // cout << "hello" << endl;
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