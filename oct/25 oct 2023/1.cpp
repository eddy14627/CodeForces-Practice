#include <bits/stdc++.h>
using namespace std;

{
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        long long val = myPow(num, mid);
        if (val <= m)
        {
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    return ed;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int free_2 = 0, free_5 = 0;
    int n1 = n;
    while (n1 % 2 == 0)
    {
        n1 = n1 / 2;
        free_2++;
    }
    n1 = n;
    while (n1 % 5 == 0)
    {
        n1 = n1 / 5;
        free_5++;
    }
    long long num = 1;
    while (free_2 < free_5 && num * 2 <= m)
    {
        num *= 2;
        free_2++;
    }
    while (free_2 > free_5 && num * 5 <= m)
    {
        num *= 5;
        free_5++;
    }

    while (num * 10 <= m)
        num *= 10;

    if (num == 1)
    {
        cout << (long long)n * m << endl;
    }
    else
    {
        num = num * (m / num);
        cout << (long long)n * num << endl;
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