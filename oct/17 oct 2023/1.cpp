#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int intiXor = 0;
    vector<int> cnt(32);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        for (int j = 0; j < 32; j++)
        {
            if (num & (1 << j))
                cnt[j]++;
        }
        intiXor = intiXor ^ num;
    }

    int maxi = intiXor, mini = intiXor;
    int bXor = 0;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        bXor = bXor ^ num;
        int temp = 0;
        for (int j = 0; j < 32; j++)
        {
            if (num & (1 << j))
            {
                if (n % 2)
                {
                    temp = temp | (1 << j);
                }
            }
            else
            {
                if (cnt[j] % 2)
                {
                    temp = temp | (1 << j);
                }
            }
        }
        maxi = max(maxi, temp);
        mini = min(mini, temp);
    }
    int temp = 0;
    int num = bXor;
    for (int j = 0; j < 32; j++)
    {
        if (num & (1 << j))
        {
            if (n % 2)
            {
                temp = temp | (1 << j);
            }
        }
        else
        {
            if (cnt[j] % 2)
            {
                temp = temp | (1 << j);
            }
        }
    }
    bXor = temp;
    if (n % 2)
    {
        cout << mini << " " << bXor << endl;
    }
    else
    {
        cout << bXor << " " << mini << endl;
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