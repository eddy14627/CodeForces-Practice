#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<string> s(2);
    cin >> s[0] >> s[1];
    int t, q;
    cin >> t >> q;
    int cnt = 0, n = s[0].size();
    for (int i = 0; i < n; i++)
    {
        if (s[0][i] != s[1][i])
            cnt++;
    }
    queue<pair<int, int>> qu;
    int time = 0;
    for (int i = 0; i < q; i++)
    {
        if (qu.size())
        {
            auto front = qu.front();
            if (front.first == time)
            {
                qu.pop();
                cnt++;
            }
        }
        int qr;
        cin >> qr;
        if (qr == 1)
        {
            int pos;
            cin >> pos;
            if (s[0][pos - 1] != s[1][pos - 1])
            {
                cnt--;
                qu.push({time + t, pos - 1});
            }
        }
        else if (qr == 2)
        {
            int str1, pos1, str2, pos2;
            cin >> str1 >> pos1 >> str2 >> pos2;
            --str1, --pos1, --str2, --pos2;
            if (s[str1][pos1] != s[1 ^ str1][pos1])
            {
                cnt--;
            }
            if (s[str2][pos2] != s[1 ^ str2][pos2])
            {
                cnt--;
            }
            swap(s[str1][pos1], s[str2][pos2]);
            if (s[str1][pos1] != s[1 ^ str1][pos1])
            {
                cnt++;
            }
            if (s[str2][pos2] != s[1 ^ str2][pos2])
            {
                cnt++;
            }
        }
        else if (qr == 3)
        {
            cout << (cnt ? "NO" : "YES") << endl;
        }
        time++;
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