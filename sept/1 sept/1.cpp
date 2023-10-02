#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int cnt = 0, n = str.size();
    vector<int> status(n+1 , -1);
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
                status[i+1] = 1;
            }
            else
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
                status[i+1] = -1;
            }
            else if (str[i] == '-')
            {
                cnt--;
                status[i+1] = 1;
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
                if (status[i] == 1)
                {
                    status[i+1] = -1;
                }
            }
            else if (str[i] == '-')
            {
                cnt--;
                if (status[i] == 0)
                {
                    status[i+1] = ;
                }
            }
            else if (str[i] == '1')
            {
                if (status[i] == 0)
                {
                    cout << "No" << endl;
                    return;
                }
                else if (status[i] == -1)
                {
                    status[i+1] = 1;
                }
            }
            else
            {
                if (status[i] == 1)
                {
                    cout << "No" << endl;
                    return;
                }
                else if (status[i] == -1)
                {
                    status[i] = 0;
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