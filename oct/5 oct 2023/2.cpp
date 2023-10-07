#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = 0;
    bool flag = false;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ')')
            check--;
        else
            check++;
    }
    if (check != 0)
    {
        cout << -1 << endl;
        return;
    }
    int idx = 0;
    while ((idx < (n / 2)) && (((str[idx] == ')') && (str[n - 1 - idx] == '(')) || ((str[idx] == '(') && (str[n - 1 - idx] == ')'))))
    {
        idx++;
    }
    int ind = 0;
    check = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ')')
            check--;
        else
            check++;
        if (check < 0)
            break;
    }

    if (idx == n / 2 || !check)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    cout << 2 << endl;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            if (str[i] == ')')
            {
                if (flag)
                    flag = false;
                cnt--;
                cout << flag + 1 << " ";
            }
            else
            {
                if (!flag)
                    flag = true;
                cnt++;
                cout << flag + 1 << " ";
            }
        }
        else
        {
            cout << flag + 1 << " ";
            if (str[i] == ')')
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
        }
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