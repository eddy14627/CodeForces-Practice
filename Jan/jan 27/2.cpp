#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<long long> alpha(26);
    for (long long i = 0; i < str.size(); i++)
    {
        alpha[str[i] - 'A']++;
    }

    unordered_map<char, long long> mp;
    long long cnt = 0;
    for (long long i = 0; i < 26; i++)
    {
        if (alpha[i] % 2)
        {
            mp[char(i + 'A')] = alpha[i];
            alpha[i] = 0;
            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string ans = "";
    for (long long i = 0; i < 26; i++)
    {
        long long freq = alpha[i] / 2;
        while (freq--)
        {
            ans += ('A' + i);
            alpha[i]--;
        }
    }

    while (mp.size() && mp.begin()->second)
    {
        ans += mp.begin()->first;
        mp.begin()->second--;
    }

    for (long long i = 25; i >= 0; i--)
    {
        long long freq = alpha[i];
        while (freq--)
        {
            ans += 'A' + i;
            alpha[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}