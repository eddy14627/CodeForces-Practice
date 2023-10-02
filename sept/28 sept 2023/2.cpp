#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> l(k), r(k);
    for (auto &it : l)
    {
        cin >> it;
        it--;
    }
    for (auto &it : r)
    {
        cin >> it;
        it--;
    }
    long long q;
    cin >> q;
    vector<int> swapOrNot(n);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        swapOrNot[x - 1]++;
    }

    for (int i = 0; i < k; i++)
    {
        int st = l[i], ed = r[i];
        int sum = 0;
        for (int j = st; j <= (st + ((ed - st) / 2)); j++)
        {
            sum += swapOrNot[j] + swapOrNot[ed + st - j];
            if (sum % 2)
                swap(str[j], str[ed + st - j]);
        }
    }
    cout << str << endl;
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