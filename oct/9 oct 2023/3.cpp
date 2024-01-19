#include <bits/stdc++.h>
using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
}
void solve()
{
    double px, py;
    cin >> px >> py;
    double ax, ay;
    cin >> ax >> ay;
    double bx, by;
    cin >> bx >> by;

    double d = dist(ax, ay, bx, by);
    double d1 = max(dist(0, 0, ax, ay), dist(px, py, ax, ay));
    double d2 = max(dist(0, 0, bx, by), dist(px, py, bx, by));

    double d3 = max(dist(0, 0, ax, ay), dist(px, py, bx, by));
    double d4 = max(dist(0, 0, bx, by), dist(px, py, ax, ay));
    double x1 = -1, x2 = -1;
    if ((double)2 * d3 >= d)
    {
        x1 = d3;
    }
    else
    {
        double temp = d - (2 * d3);
        x1 = d3 + (temp / 2);
    }

    if ((double)2 * d4 >= d)
    {
        x2 = d4;
    }
    else
    {
        double temp = d - (2 * d4);
        x2 = d4 + (temp / 2);
    }
    cout << fixed << setprecision(10) << min({d1, d2, x1, x2}) << endl;
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