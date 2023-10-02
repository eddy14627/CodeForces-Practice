#include <bits/stdc++.h>
using namespace std;

int ceilDivision(int numerator, int denominator)
{
    return (numerator + denominator - 1) / denominator;
}

void solve()
{
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    long long x = x2 - x1, y = y2 - y1;
    double d = sqrt(x * x + y * y);
    double ans = d / (2 * r);
    cout << ceil(ans) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}
