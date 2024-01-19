#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    string ans = "";
    unordered_map<char, char> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            char ch = 'a' + j;
            if (ch == t[i])
                continue;
            if (mp.find(ch) != mp.end())
            {
                int cnt = 0;
                char tempChar = ch;
                while (mp.find(tempChar) != mp.end())
                {
                    cnt++;
                    tempChar = mp[tempChar];
                }
                if (tempChar == t[i])
                {
                    if (cnt == 25)
                    {
                        mp[ch] = t[i];
                        mp[t[i]] = ch;
                        ans += ch;
                        break;
                    }
                }
                else
                {
                    mp[ch] = t[i];
                    mp[t[i]] = ch;
                    ans += ch;
                    break;
                }
            }
            else
            {
                mp[ch] = t[i];
                mp[t[i]] = ch;
                ans += ch;
                break;
            }
        }
    }
    cout << ans << endl;
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