#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int cnt = 0, n = str.size();
    int maxSorted = 1, minUSorted = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            if (str[i] == '-')
            {
                cout << "No" << endl;
                return;
            }
            else if (str[i] == '+')
            {
                cnt++;
                maxSorted = cnt;
            }
            else if (str[i] == '0')
            {
                cout << "No" << endl;
                return;
            }
        }
        else if (cnt == 1)
        {
            if (str[i] == '+')
            {
                cnt++;
            }
            else if (str[i] == '-')
            {
                cnt--;
                maxSorted = min(maxSorted, cnt);
            }
            else if (str[i] == '0')
            {
                cout << "No" << endl;
                return;
            }
        }
        else
        {
            if (str[i] == '+')
            {
                cnt++;
            }
            else if (str[i] == '-')
            {
                cnt--;
                maxSorted = min(maxSorted, cnt);
                if (cnt < minUSorted)
                {
                    minUSorted = 0;
                }
            }
            else if (str[i] == '1')
            {
                if (minUSorted <= cnt)
                {
                    cout << "No" << endl;
                    return;
                }
                else
                {
                    maxSorted = max(maxSorted, cnt);
                }
            }
            else
            {
                if (cnt <= maxSorted)
                {
                    cout << "No" << endl;
                    return;
                }
                else
                {
                    minUSorted = cnt;
                }
            }
        }
    }
    cout << "Yes" << endl;
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