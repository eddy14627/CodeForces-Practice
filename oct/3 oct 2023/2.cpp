#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int open = 0, close = 0;
    for (auto ch : str)
    {
        if (ch == '(')
            open++;
        else
            close++;
    }
    if (open != close)
    {
        cout << -1 << endl;
        return;
    }
    int i = 0;
    for (; i < n; i++)
    {
        if (str[i] == '(')
            open++;
        else
            close++;
        if (close > open)
            break;
    }
    if (i == n)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    i = 0;
    while (i < n / 2 &&
           ((str[i] == '(' && str[n - 1 - i] == ')') ||
            (str[i] == ')' && str[n - 1 - i] == '(')))
        i++;
    if (i == n / 2)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    open = 0, close = 0;
    vector<int> arr(n);
    bool col = true;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || open == close)
        {
            col = !col;
        }
        arr[i] = col;
        if (str[i] == '(')
            open++;
        else
            close++;
    }
    cout << 2 << endl;
    for (auto x : arr)
    {
        cout << x + 1 << " ";
    }
    cout << endl;
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