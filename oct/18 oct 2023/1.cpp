#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> cnt(32), a(n), b(m);
    int OrAll = 0, InitialXor = 0;
    for (auto &it : a)
    {
        cin >> it;
        for (int i = 0; i < 32; i++)
        {
            if (it & (1 << i))
            {
                cnt[i]++;
            }
        }
        InitialXor = InitialXor ^ it;
    }
    for (auto &it : b)
    {
        cin >> it;
        OrAll = OrAll | it;
    }

    if (n % 2)
    {
        int maxi = InitialXor, mini = InitialXor;
        int num = 0;
        for (int i = 0; i < 32; i++)
        {
            if (OrAll & (1 << i))
            {
                num = num | (1 << i);
            }
            else
            {
                if (cnt[i] % 2)
                {
                    num = num | (1 << i);
                }
            }
        }
        maxi = max(maxi, num);

        for (int i = 0; i < m; i++)
        {
            int temp = 0;
            for (int j = 0; j < 32; j++)
            {
                if (b[i] & (1 << j))
                {
                    temp = temp | (1 << j);
                }
                else
                {
                    if (cnt[j] % 2)
                    {
                        temp = temp | (1 << j);
                    }
                }
            }
            mini = min(mini, temp);
        }

        cout << mini << " " << maxi << endl;
    }
    else
    {
        int mini = InitialXor, maxi = InitialXor;
        int num = 0;
        for (int i = 0; i < 32; i++)
        {
            if (!(OrAll & (1 << i)))
            {
                if (cnt[i] % 2)
                {
                    num = num | (1 << i);
                }
            }
        }
        mini = min(mini, num);

        for (int i = 0; i < m; i++)
        {
            int temp = 0;
            for (int j = 0; j < 32; j++)
            {
                if (!(b[i] & (1 << j)))
                {
                    if (cnt[j] % 2)
                    {
                        temp = temp | (1 << j);
                    }
                }
            }
            maxi = max(maxi, temp);
        }

        cout << mini << " " << maxi << endl;
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