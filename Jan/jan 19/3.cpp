#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k;
    cin >> k;

    vector<int> a(n), b(m);
    int ax = 0, an = 1e9 + 1, bx = 0, bn = 1e9 + 1;
    long long sumA = 0, sumB = 0;
    for (auto &it : a)
    {
        cin >> it;
        sumA += it;
        ax = max(ax, it);
        an = min(an, it);
    }
    for (auto &it : b)
    {
        cin >> it;
        sumB += it;
        bx = max(bx, it);
        bn = min(bn, it);
    }
    if (ax >= bx && an <= bn)
    {
        if (k % 2)
        {
            cout << sumA + bx - an << endl;
        }
        else
        {
            cout << sumA + bx - ax << endl;
        }
    }
    else if (ax >= bx && an >= bn)
    {
        if (k % 2)
        {
            cout << sumA + bx - an << endl;
        }
        else
        {
            cout << sumA + bx - ax - an + bn << endl;
        }
    }
    else if (ax <= bx && an >= bn)
    {
        if (k % 2)
        {
            cout << sumA + bx - an << endl;
        }
        else
        {
            cout << sumA + bn - an << endl;
        }
    }
    else if (ax <= bx && an <= bn)
    {
        if (k % 2)
        {
            cout << sumA + bx - an << endl;
        }
        else
        {
            cout << sumA << endl;
        }
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